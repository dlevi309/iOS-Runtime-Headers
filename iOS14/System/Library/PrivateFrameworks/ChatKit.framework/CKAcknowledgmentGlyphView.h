/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)cacheGlyphView:(id)arg1 ;
+(id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(char)arg2 ;
+(id)viewCache;
-(double)animationDuration;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(UIColor *)glyphColor;
-(CGPoint)glyphOffset;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
@end

