/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataCloudKitMirroringHandler.h>

@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>

@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; 
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)arg1 ;
-(void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)scheduleImportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

