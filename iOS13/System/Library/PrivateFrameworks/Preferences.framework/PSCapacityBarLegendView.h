/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)createConstraints;
-(id)initWithCapacityBarCategory:(id)arg1 ;
@end

