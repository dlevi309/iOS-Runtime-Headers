/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingPan.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIAttachmentBehavior, NSString;

@interface OKActionBindingDynamicPan : OKActionBindingPan <UIGestureRecognizerDelegate> {

	double _length;
	double _damping;
	double _frequency;
	UIAttachmentBehavior* _draggingBehavior;

}

@property (assign,nonatomic) double length;                         //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) double damping;                        //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(double)arg1 ;
-(void)unload;
-(id)initWithSettings:(id)arg1 ;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(void)performActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
@end

