/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@class NSString;

@interface ASSetupManager : NSObject <ASActivitySharingManagerReadyObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)_migrateToTwoWaySyncSetupDefault;
@end

