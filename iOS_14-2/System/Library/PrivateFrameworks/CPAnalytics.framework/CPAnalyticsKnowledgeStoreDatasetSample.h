/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subset;
-(id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3 ;
-(NSDate *)date;
-(NSString *)identifier;
-(id)metadata;
@end

