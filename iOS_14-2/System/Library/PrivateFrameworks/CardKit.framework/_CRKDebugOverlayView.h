/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)debugText;
-(void)setDebugText:(NSString *)arg1 ;
@end

