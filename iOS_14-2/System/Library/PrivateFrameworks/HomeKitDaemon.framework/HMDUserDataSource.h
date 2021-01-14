/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDUserDataSource.h>

@protocol HMDUserDataSource
@required
-(id)userDataControllerWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 home:(id)arg4 shareMessenger:(id)arg5;
-(BOOL)isCurrentUser:(id)arg1;

@end


@interface HMDUserDataSource : NSObject <HMDUserDataSource>
-(id)userDataControllerWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 ;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 home:(id)arg4 shareMessenger:(id)arg5 ;
-(BOOL)isCurrentUser:(id)arg1 ;
@end

