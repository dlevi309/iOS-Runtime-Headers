/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger, OS_dispatch_queue;
@class AVTSnapshotBuilder, NSObject;

@interface AVTAvatarImageRenderer : NSObject {

	AVTSnapshotBuilder* _snapshotBuilder;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _snapshotBuilderQueue;

}

@property (nonatomic,retain) AVTSnapshotBuilder * snapshotBuilder;                             //@synthesize snapshotBuilder=_snapshotBuilder - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotBuilderQueue;              //@synthesize snapshotBuilderQueue=_snapshotBuilderQueue - In the implementation block
-(id)init;
-(id)initWithEnvironment:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id)imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(id)initWithSnapshotBuilder:(id)arg1 lockProvider:(/*^block*/id)arg2 logger:(id)arg3 ;
-(id)nts_imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(void)setSnapshotBuilder:(AVTSnapshotBuilder *)arg1 ;
@end

