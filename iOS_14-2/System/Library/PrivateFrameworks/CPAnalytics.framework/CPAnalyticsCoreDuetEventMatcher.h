/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class CPAnalyticsEventMatcher, NSString, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {

	CPAnalyticsEventMatcher* _eventMatcher;
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
-(BOOL)doesMatch:(id)arg1 ;
-(id)init;
-(NSString *)identifierPropertyName;
-(NSString *)datasetName;
-(BOOL)matchNextEvent;
-(id)initWithConfig:(id)arg1 ;
-(NSObject *)subsetPropertyValue;
-(NSString *)subsetPropertyName;
@end

