/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UIView.h>

@class PSLegendColorView, UILabel, UIColor, NSString;

@interface PSCapacityBarLegendView : UIView {

	PSLegendColorView* _legendColor;
	UILabel* _legendLabel;

}

@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
-(UIColor *)textColor;
-(UIColor *)color;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)createConstraints;
-(id)initWithCapacityBarCategory:(id)arg1 ;
@end

