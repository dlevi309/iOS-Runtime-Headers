/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class NSString, UITextView;

@interface WFCompactTextThumbnailViewController : WFCompactThumbnailViewController {

	NSString* _string;
	UITextView* _textView;

}

@property (nonatomic,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(UITextView *)textView;
-(id)initWithString:(id)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(NSString *)string;
-(unsigned long long)preferredContentMode;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

