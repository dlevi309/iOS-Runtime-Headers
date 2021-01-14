/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)_updatePlaceholder;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_shouldScrollEnclosingScrollView;
-(NSString *)placeholder;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)dealloc;
@end

