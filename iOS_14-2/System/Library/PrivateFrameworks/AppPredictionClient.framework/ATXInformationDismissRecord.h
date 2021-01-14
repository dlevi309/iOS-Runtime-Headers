/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString, NSDate;

@interface ATXInformationDismissRecord : NSObject {

	NSString* _widgetBundleId;
	NSString* _criterion;
	NSDate* _blockWidgetUntilDate;
	NSDate* _blockCriterionUntilDate;

}

@property (nonatomic,readonly) NSString * widgetBundleId;                     //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,readonly) NSString * criterion;                          //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,readonly) NSDate * blockWidgetUntilDate;                 //@synthesize blockWidgetUntilDate=_blockWidgetUntilDate - In the implementation block
@property (nonatomic,readonly) NSDate * blockCriterionUntilDate;              //@synthesize blockCriterionUntilDate=_blockCriterionUntilDate - In the implementation block
-(id)init;
-(NSString *)criterion;
-(NSString *)widgetBundleId;
-(id)initWithWidgetBundleId:(id)arg1 criterion:(id)arg2 blockWidgetUntilDate:(id)arg3 blockCriterionUntilDate:(id)arg4 ;
-(NSDate *)blockWidgetUntilDate;
-(NSDate *)blockCriterionUntilDate;
@end

