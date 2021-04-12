/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class UILabel;

@interface EKPlaceholderTextView : UITextView {

	UILabel* _placeholder;
	BOOL _showingPlaceholder;

}
-(void)textChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updatePlaceholder;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(id)_placeholderLabel;
-(void)dealloc;
@end

