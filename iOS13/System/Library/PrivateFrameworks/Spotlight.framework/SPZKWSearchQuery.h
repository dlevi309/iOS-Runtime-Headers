/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
*/

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask {

	NSArray* _mutableSections;
	unsigned long long _queryID;

}

@property (assign) unsigned long long queryID;              //@synthesize queryID=_queryID - In the implementation block
+(void)initialize;
-(void)start;
-(unsigned long long)queryID;
-(void)setQueryID:(unsigned long long)arg1 ;
-(void)startAtUIPriority:(BOOL)arg1 ;
-(void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3 ;
-(void)startAtUIPriority;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
@end

