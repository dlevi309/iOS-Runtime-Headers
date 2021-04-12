/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willRemoveSubview:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)didAddSubview:(id)arg1 ;
-(void)disableSubview:(id)arg1 ;
-(void)enableSubview:(id)arg1 ;
-(void)setSubviewsDisabled:(BOOL)arg1 ;
-(void)beginBlockingScroll;
-(void)endBlockingScroll;
-(BOOL)subviewsDisabled;
-(BOOL)shouldScrollToFirstResponder;
-(void)setShouldScrollToFirstResponder:(BOOL)arg1 ;
@end

