/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, NSString;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {

	UILabel* _placeholderLabel;
	BOOL _allowEnclosingViewScroll;
	CGSize _previousIntrinsicContentSize;
	CGSize _previousSizeThatFits;

}

@property (nonatomic,copy) NSString * placeholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(NSString *)placeholder;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_updatePlaceholder;
@end

