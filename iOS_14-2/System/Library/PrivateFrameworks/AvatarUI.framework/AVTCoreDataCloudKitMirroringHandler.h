/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreDataCloudKitMirroringHandler.h>

@protocol AVTCoreDataCloudKitMirroringHandler
@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; 
@required
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol AVTCoreDataCloudKitMirroringHandlerDelegate, AVTUILogger, AVTBlockScheduler, NSObject;
@class NSNotificationCenter;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler> {

	BOOL _exportInFlight;
	id<AVTCoreDataCloudKitMirroringHandlerDelegate> _delegate;
	id<AVTUILogger> _logger;
	id<AVTBlockScheduler> _blockScheduler;
	id<NSObject> _willResetNotificationToken;
	id<NSObject> _didResetNotificationToken;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTBlockScheduler> blockScheduler;                                       //@synthesize blockScheduler=_blockScheduler - In the implementation block
@property (nonatomic,retain) id<NSObject> willResetNotificationToken;                                      //@synthesize willResetNotificationToken=_willResetNotificationToken - In the implementation block
@property (nonatomic,retain) id<NSObject> didResetNotificationToken;                                       //@synthesize didResetNotificationToken=_didResetNotificationToken - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (assign,nonatomic) BOOL exportInFlight;                                                          //@synthesize exportInFlight=_exportInFlight - In the implementation block
@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)arg1 ;
-(id<AVTUILogger>)logger;
-(id<NSObject>)willResetNotificationToken;
-(id<NSObject>)didResetNotificationToken;
-(void)willResetSync:(id)arg1 ;
-(void)setWillResetNotificationToken:(id<NSObject>)arg1 ;
-(void)didResetSync:(id)arg1 ;
-(void)setDidResetNotificationToken:(id<NSObject>)arg1 ;
-(BOOL)exportInFlight;
-(void)setExportInFlight:(BOOL)arg1 ;
-(void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithLogger:(id)arg1 blockScheduler:(id)arg2 ;
-(void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 workQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<AVTBlockScheduler>)blockScheduler;
-(void)dealloc;
@end

