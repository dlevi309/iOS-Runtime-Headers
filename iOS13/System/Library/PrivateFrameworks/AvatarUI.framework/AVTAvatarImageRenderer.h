/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AVTUILogger>)logger;
-(id)initWithEnvironment:(id)arg1 ;
-(id)initWithSnapshotBuilder:(id)arg1 lockProvider:(/*^block*/id)arg2 logger:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(id)nts_imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(id)imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(void)setSnapshotBuilder:(AVTSnapshotBuilder *)arg1 ;
@end

