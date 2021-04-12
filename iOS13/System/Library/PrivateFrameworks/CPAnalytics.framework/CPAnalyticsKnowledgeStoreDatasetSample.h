/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSDate;

@interface CPAnalyticsKnowledgeStoreDatasetSample : NSObject {

	NSString* _identifier;
	NSDate* _date;
	NSString* _subset;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * subset;                  //@synthesize subset=_subset - In the implementation block
-(NSDate *)date;
-(NSString *)identifier;
-(id)metadata;
-(NSString *)subset;
-(id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3 ;
@end

