/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/CalendarLabelTextMetrics.h>

@class UIFont, UIColor, NSString;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {

	long long lineBreakMode;

}

@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
-(long long)lineBreakMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setURL:(id)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(id)accessibilityValue;
-(long long)numberOfLines;
@end

