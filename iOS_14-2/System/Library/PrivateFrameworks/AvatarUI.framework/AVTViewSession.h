/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTViewSessionDelegate;
#import <AvatarUI/AvatarUI-Structs.h>
@class UIView, AVTView, AVTViewUpdater;

@interface AVTViewSession : NSObject {

	BOOL _active;
	UIView* _avtViewContainer;
	AVTView* _avtView;
	AVTViewUpdater* _avtViewUpdater;
	/*^block*/id _becomeActiveHandler;
	/*^block*/id _tearDownHandler;
	id<AVTViewSessionDelegate> _delegate;
	CGSize _aspectRatio;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) UIView * avtViewContainer;                               //@synthesize avtViewContainer=_avtViewContainer - In the implementation block
@property (assign,nonatomic) AVTViewUpdater * avtViewUpdater;                         //@synthesize avtViewUpdater=_avtViewUpdater - In the implementation block
@property (assign,nonatomic) AVTView * avtView;                                       //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,copy,readonly) id becomeActiveHandler;                           //@synthesize becomeActiveHandler=_becomeActiveHandler - In the implementation block
@property (nonatomic,copy,readonly) id tearDownHandler;                               //@synthesize tearDownHandler=_tearDownHandler - In the implementation block
@property (assign,nonatomic,__weak) id<AVTViewSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize aspectRatio;                                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(AVTView *)avtView;
-(id<AVTViewSessionDelegate>)delegate;
-(BOOL)isActive;
-(CGSize)aspectRatio;
-(id)tearDownHandler;
-(void)setDelegate:(id<AVTViewSessionDelegate>)arg1 ;
-(void)setAvtViewContainer:(UIView *)arg1 ;
-(void)setAvtViewUpdater:(AVTViewUpdater *)arg1 ;
-(id)becomeActiveHandler;
-(id)initWithBecomeActiveHandler:(/*^block*/id)arg1 tearDownHandler:(/*^block*/id)arg2 aspectRatio:(CGSize)arg3 ;
-(void)activateWithAVTView:(id)arg1 container:(id)arg2 updater:(id)arg3 ;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIView *)avtViewContainer;
-(void)setAvtView:(AVTView *)arg1 ;
-(AVTViewUpdater *)avtViewUpdater;
@end

