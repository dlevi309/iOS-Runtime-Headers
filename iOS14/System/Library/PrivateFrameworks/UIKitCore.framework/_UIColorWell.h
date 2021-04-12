/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIColorWell.h>

@class UIColor, NSString;

@interface _UIColorWell : UIColorWell {

	UIColor* _color;

}

@property (nonatomic,copy) NSString * pickerTitle; 
@property (assign,nonatomic) BOOL pickerSupportsAlpha; 
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setPickerTitle:(NSString *)arg1 ;
-(NSString *)pickerTitle;
-(BOOL)pickerSupportsAlpha;
-(void)setPickerSupportsAlpha:(BOOL)arg1 ;
@end

