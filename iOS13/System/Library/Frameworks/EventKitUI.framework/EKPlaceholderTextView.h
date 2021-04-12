/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class UILabel;

@interface EKPlaceholderTextView : UITextView {

	UILabel* _placeholder;
	BOOL _showingPlaceholder;

}
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(id)_placeholderLabel;
-(void)textChanged:(id)arg1 ;
-(void)_updatePlaceholder;
@end

