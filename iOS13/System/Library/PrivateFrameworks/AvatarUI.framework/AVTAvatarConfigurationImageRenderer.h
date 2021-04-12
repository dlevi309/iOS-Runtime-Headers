/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger, OS_dispatch_queue;
@class AVTMemoji, AVTSnapshotBuilder, NSObject;

@interface AVTAvatarConfigurationImageRenderer : NSObject {

	AVTMemoji* _avatar;
	AVTSnapshotBuilder* _snapshotBuilder;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _snapshotBuilderQueue;

}

@property (nonatomic,readonly) AVTMemoji * avatar;                                             //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) AVTSnapshotBuilder * snapshotBuilder;                             //@synthesize snapshotBuilder=_snapshotBuilder - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotBuilderQueue;              //@synthesize snapshotBuilderQueue=_snapshotBuilderQueue - In the implementation block
-(id<AVTUILogger>)logger;
-(id)initWithEnvironment:(id)arg1 ;
-(AVTMemoji *)avatar;
-(id)imageForAvatarConfiguration:(id)arg1 scope:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(void)setSnapshotBuilder:(AVTSnapshotBuilder *)arg1 ;
-(id)initWithLockProvider:(/*^block*/id)arg1 logger:(id)arg2 ;
-(id)initWithSnapshotBuilder:(id)arg1 avatar:(id)arg2 lockProvider:(/*^block*/id)arg3 logger:(id)arg4 ;
-(id)nts_imageForAvatarConfiguration:(id)arg1 scope:(id)arg2 ;
@end

