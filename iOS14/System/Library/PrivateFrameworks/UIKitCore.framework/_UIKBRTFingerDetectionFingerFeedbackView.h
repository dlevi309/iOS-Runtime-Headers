/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {

	CGPoint _framelocation;
	double _radiusInt;
	BOOL _unknownSeen;
	UILabel* _fingerLabel;
	_UIKBRTFingerDetectionFingerCircleView* _fingerDot;

}

@property (nonatomic,retain) UILabel * fingerLabel;                                           //@synthesize fingerLabel=_fingerLabel - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetectionFingerCircleView * fingerDot;              //@synthesize fingerDot=_fingerDot - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                                                //@synthesize unknownSeen=_unknownSeen - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(void)centerOn:(CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3 ;
-(UILabel *)fingerLabel;
-(void)setFingerLabel:(UILabel *)arg1 ;
-(void)setFingerDot:(_UIKBRTFingerDetectionFingerCircleView *)arg1 ;
-(double)radius;
-(void)layoutSubviews;
-(_UIKBRTFingerDetectionFingerCircleView *)fingerDot;
-(BOOL)unknownSeen;
@end

