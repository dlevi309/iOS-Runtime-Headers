/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVTMemoji *)avatar;
-(id)initWithLockProvider:(/*^block*/id)arg1 logger:(id)arg2 ;
-(id)imageForAvatarConfiguration:(id)arg1 scope:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id)initWithSnapshotBuilder:(id)arg1 avatar:(id)arg2 lockProvider:(/*^block*/id)arg3 logger:(id)arg4 ;
-(id)nts_imageForAvatarConfiguration:(id)arg1 scope:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(void)setSnapshotBuilder:(AVTSnapshotBuilder *)arg1 ;
@end

