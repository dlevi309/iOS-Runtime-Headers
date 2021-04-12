/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class PKMonthDayCollectionViewController;

@interface PKAccountAutomaticPaymentsDateFooterView : UITableViewHeaderFooterView {

	PKMonthDayCollectionViewController* _collectionViewController;

}

@property (nonatomic,retain) PKMonthDayCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
-(void)layoutSubviews;
-(void)setCollectionViewController:(PKMonthDayCollectionViewController *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKMonthDayCollectionViewController *)collectionViewController;
@end

