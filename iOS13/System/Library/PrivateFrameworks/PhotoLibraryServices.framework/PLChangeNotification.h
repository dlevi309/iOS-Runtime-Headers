/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic,readonly) PLChangeNotificationCenter * changeNotificationCenter; 
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(PLChangeNotificationCenter *)changeNotificationCenter;
-(void)_calculateDiffs;
@end

