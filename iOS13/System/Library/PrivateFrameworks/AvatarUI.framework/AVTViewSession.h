/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AVTViewSessionDelegate>)delegate;
-(void)setDelegate:(id<AVTViewSessionDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(CGSize)aspectRatio;
-(AVTView *)avtView;
-(void)setAvtView:(AVTView *)arg1 ;
-(AVTViewUpdater *)avtViewUpdater;
-(void)setAvtViewContainer:(UIView *)arg1 ;
-(void)setAvtViewUpdater:(AVTViewUpdater *)arg1 ;
-(id)becomeActiveHandler;
-(id)tearDownHandler;
-(id)initWithBecomeActiveHandler:(/*^block*/id)arg1 tearDownHandler:(/*^block*/id)arg2 aspectRatio:(CGSize)arg3 ;
-(void)activateWithAVTView:(id)arg1 container:(id)arg2 updater:(id)arg3 ;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIView *)avtViewContainer;
@end

