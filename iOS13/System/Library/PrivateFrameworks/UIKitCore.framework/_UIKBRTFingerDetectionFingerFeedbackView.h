/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)radius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(BOOL)unknownSeen;
-(void)centerOn:(CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3 ;
-(UILabel *)fingerLabel;
-(_UIKBRTFingerDetectionFingerCircleView *)fingerDot;
-(void)setFingerLabel:(UILabel *)arg1 ;
-(void)setFingerDot:(_UIKBRTFingerDetectionFingerCircleView *)arg1 ;
@end

