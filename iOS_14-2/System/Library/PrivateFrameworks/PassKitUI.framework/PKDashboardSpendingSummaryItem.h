/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKSpendingSummary, NSString;

@interface PKDashboardSpendingSummaryItem : NSObject <PKDashboardItem> {

	PKSpendingSummary* _spendingSummary;

}

@property (nonatomic,retain) PKSpendingSummary * spendingSummary;              //@synthesize spendingSummary=_spendingSummary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKSpendingSummary *)spendingSummary;
-(void)setSpendingSummary:(PKSpendingSummary *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

