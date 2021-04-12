/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class NSString, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {

	BOOL _matchNextEvent;
	NSString* _datasetName;
	NSString* _identifierPropertyName;
	NSString* _subsetPropertyName;
	NSObject* _subsetPropertyValue;

}

@property (nonatomic,readonly) NSString * datasetName;                         //@synthesize datasetName=_datasetName - In the implementation block
@property (nonatomic,readonly) NSString * identifierPropertyName;              //@synthesize identifierPropertyName=_identifierPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * subsetPropertyName;                  //@synthesize subsetPropertyName=_subsetPropertyName - In the implementation block
@property (nonatomic,readonly) NSObject * subsetPropertyValue;                 //@synthesize subsetPropertyValue=_subsetPropertyValue - In the implementation block
@property (nonatomic,readonly) BOOL matchNextEvent;                            //@synthesize matchNextEvent=_matchNextEvent - In the implementation block
-(id)initWithConfig:(id)arg1 ;
-(NSString *)datasetName;
-(NSString *)identifierPropertyName;
-(NSString *)subsetPropertyName;
-(NSObject *)subsetPropertyValue;
-(BOOL)matchNextEvent;
@end

