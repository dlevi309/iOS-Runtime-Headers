/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NSMutableSet;

@interface MFComposeScrollView : UIScrollView {

	NSMutableSet* _disabledSubviews;
	long long _scrollBlocked;
	BOOL _subviewsDisabled;
	BOOL _shouldScrollToFirstResponder;

}

@property (assign,nonatomic) BOOL subviewsDisabled;                          //@synthesize subviewsDisabled=_subviewsDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldScrollToFirstResponder;              //@synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)disableSubview:(id)arg1 ;
-(void)enableSubview:(id)arg1 ;
-(void)setSubviewsDisabled:(BOOL)arg1 ;
-(void)beginBlockingScroll;
-(void)endBlockingScroll;
-(BOOL)subviewsDisabled;
-(BOOL)shouldScrollToFirstResponder;
-(void)setShouldScrollToFirstResponder:(BOOL)arg1 ;
@end

