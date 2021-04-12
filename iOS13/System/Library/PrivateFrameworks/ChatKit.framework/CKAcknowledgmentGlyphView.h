/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CKAcknowledgmentGlyphView : UIView {

	double _animationDuration;
	UIColor* _glyphColor;
	CGPoint _glyphOffset;

}

@property (nonatomic,readonly) long long acknowledgmentType; 
@property (nonatomic,readonly) CGPoint glyphOffset;                       //@synthesize glyphOffset=_glyphOffset - In the implementation block
@property (nonatomic,readonly) double animationDuration;                  //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(char)arg2 ;
+(void)cacheGlyphView:(id)arg1 ;
+(id)viewCache;
-(double)animationDuration;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(CGPoint)glyphOffset;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
@end

