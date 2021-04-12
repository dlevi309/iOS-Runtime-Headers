/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForReuse;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(PKPaymentAuthorizationSummaryItemsView *)summaryItemsView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
@end

