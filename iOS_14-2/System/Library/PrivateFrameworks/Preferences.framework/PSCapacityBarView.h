/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PSCapacityBarData *)barData;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBarBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)barOtherDataColor;
-(void)setBarOtherDataColor:(UIColor *)arg1 ;
-(void)setBarSeparatorColor:(UIColor *)arg1 ;
-(id)bezierPathWithLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(UIColor *)barBackgroundColor;
-(UIColor *)barSeparatorColor;
-(void)setBarData:(PSCapacityBarData *)arg1 ;
@end

