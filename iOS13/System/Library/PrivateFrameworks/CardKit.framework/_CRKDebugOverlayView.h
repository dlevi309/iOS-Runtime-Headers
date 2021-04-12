/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <CardKit/_CRKHitTestPassThroughView.h>

@class UILabel, UIColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {

	UILabel* _label;
	UIColor* _color;
	NSString* _debugText;

}

@property (nonatomic,copy) UIColor * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * debugText;              //@synthesize debugText=_debugText - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDebugText:(NSString *)arg1 ;
-(NSString *)debugText;
@end

