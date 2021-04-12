/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setURL:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
@end

