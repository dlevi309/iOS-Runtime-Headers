/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver> {

	BOOL _automaticallyObserveWindowForAnimationTimer;
	CKAnimatedImage* _animatedImage;
	NSArray* _frames;

}

@property (nonatomic,copy) NSArray * frames;                                                //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                               //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) BOOL automaticallyObserveWindowForAnimationTimer;              //@synthesize automaticallyObserveWindowForAnimationTimer=_automaticallyObserveWindowForAnimationTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(BOOL)automaticallyObserveWindowForAnimationTimer;
-(void)setAutomaticallyObserveWindowForAnimationTimer:(BOOL)arg1 ;
@end

