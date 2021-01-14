/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataCloudKitMirroringHandler.h>

@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>

@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; 
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)arg1 ;
-(void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)scheduleImportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

