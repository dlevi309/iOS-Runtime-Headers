/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/AVTViewDelegate.h>

@protocol AVTAvatarRecord, OS_dispatch_queue, AVTUILogger;
@class AVTView, NSObject, AVTAvatar, NSString;

@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate, AVTViewDelegate> {

	AVTView* _avtView;
	id<AVTAvatarRecord> _avatarRecord;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<AVTUILogger> _logger;
	/*^block*/id _avatarUpdatedHandler;
	AVTAvatar* _currentAvatar;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id avatarUpdatedHandler;                                     //@synthesize avatarUpdatedHandler=_avatarUpdatedHandler - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                          //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) AVTAvatar * currentAvatar;                                 //@synthesize currentAvatar=_currentAvatar - In the implementation block
@property (nonatomic,readonly) AVTView * avtView;                                       //@synthesize avtView=_avtView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVTView *)avtView;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(id<AVTUILogger>)logger;
-(id)initWithAVTView:(id)arg1 logger:(id)arg2 ;
-(void)setAvatarRecord:(id)arg1 avatar:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAVTView:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3 ;
-(id)avatarUpdatedHandler;
-(AVTAvatar *)currentAvatar;
-(void)setAvatarUpdatedHandler:(id)arg1 ;
-(void)setCurrentAvatar:(AVTAvatar *)arg1 ;
-(void)avatarView:(id)arg1 didRenderAvatar:(id)arg2 ;
-(void)setAvatarRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

