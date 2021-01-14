/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQueryTask : SPQueryTask {

	NSArray* _mutableSections;
	unsigned long long _queryID;

}

@property (assign) unsigned long long queryID;              //@synthesize queryID=_queryID - In the implementation block
+(void)initialize;
+(int)maxSuggestedApps;
-(void)start;
-(void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3 ;
-(id)unsafeSections;
-(void)setQueryID:(unsigned long long)arg1 ;
-(id)unsafeSessionEntityString;
-(unsigned long long)queryID;
@end

