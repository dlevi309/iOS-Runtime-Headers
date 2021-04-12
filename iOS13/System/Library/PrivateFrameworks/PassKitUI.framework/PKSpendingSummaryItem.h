/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKSpendingSummary, NSString;

@interface PKSpendingSummaryItem : NSObject <PKDashboardItem> {

	PKSpendingSummary* _spendingSummary;

}

@property (nonatomic,retain) PKSpendingSummary * spendingSummary;              //@synthesize spendingSummary=_spendingSummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PKSpendingSummary *)spendingSummary;
-(void)setSpendingSummary:(PKSpendingSummary *)arg1 ;
@end

