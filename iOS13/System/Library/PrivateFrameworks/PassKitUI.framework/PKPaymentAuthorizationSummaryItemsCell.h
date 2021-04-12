/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class NSMutableArray, PKPaymentAuthorizationSummaryItemsView;

@interface PKPaymentAuthorizationSummaryItemsCell : PKTableViewCell {

	NSMutableArray* _constraints;
	PKPaymentAuthorizationSummaryItemsView* _summaryItemsView;

}

@property (nonatomic,readonly) PKPaymentAuthorizationSummaryItemsView * summaryItemsView;              //@synthesize summaryItemsView=_summaryItemsView - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(PKPaymentAuthorizationSummaryItemsView *)summaryItemsView;
@end

