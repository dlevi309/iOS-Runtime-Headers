/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView {

	PSCapacityBarData* _barData;
	UIColor* _barBackgroundColor;
	UIColor* _barSeparatorColor;
	UIColor* _barOtherDataColor;

}

@property (nonatomic,retain) PSCapacityBarData * barData;               //@synthesize barData=_barData - In the implementation block
@property (nonatomic,retain) UIColor * barBackgroundColor;              //@synthesize barBackgroundColor=_barBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barSeparatorColor;               //@synthesize barSeparatorColor=_barSeparatorColor - In the implementation block
@property (nonatomic,retain) UIColor * barOtherDataColor;               //@synthesize barOtherDataColor=_barOtherDataColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBarBackgroundColor:(UIColor *)arg1 ;
-(void)setBarOtherDataColor:(UIColor *)arg1 ;
-(void)setBarSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)barOtherDataColor;
-(void)setBarData:(PSCapacityBarData *)arg1 ;
-(PSCapacityBarData *)barData;
-(id)bezierPathWithLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(UIColor *)barBackgroundColor;
-(UIColor *)barSeparatorColor;
@end

