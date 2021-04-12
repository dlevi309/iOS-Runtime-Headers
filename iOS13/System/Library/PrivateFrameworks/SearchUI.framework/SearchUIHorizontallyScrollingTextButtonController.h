/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKTextButton, NUIContainerStackView, NSString;

@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController <NUIContainerViewDelegate>

@property (nonatomic,retain) TLKTextButton * button; 
@property (nonatomic,retain) NUIContainerStackView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)setCardSectionRowModel:(id)arg1 ;
-(BOOL)wantsSeparators;
-(BOOL)scrollsWithoutStoppingAtBoundaries;
@end

