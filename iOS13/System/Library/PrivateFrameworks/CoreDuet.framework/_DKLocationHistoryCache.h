/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableArray, NSMutableSet, NSDate;

@interface _DKLocationHistoryCache : NSObject {

	NSMutableArray* _visits;
	NSMutableSet* _visitSet;
	double _earliestTime;
	double _latestTime;
	unsigned long long _index;
	BOOL _needsSorting;

}

@property (readonly) NSDate * oldestEntryDate; 
@property (readonly) NSDate * newestExitDate; 
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)clear;
-(void)sortIfNecessary;
-(NSDate *)oldestEntryDate;
-(NSDate *)newestExitDate;
-(void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3 ;
-(id)lookupLocationIdforDate:(id)arg1 ;
-(void)clearOldest:(unsigned long long)arg1 ;
@end

