//
//  AppDelegate.h
//  SRecognition
//
//  Created by Santanu Das Adhikary on 27/03/18.
//  Copyright © 2018 Santanu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

