/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)init;
-(unsigned long long)count;
-(NSDate *)newestExitDate;
-(void)clearOldest:(unsigned long long)arg1 ;
-(void)sortIfNecessary;
-(NSDate *)oldestEntryDate;
-(id)lookupLocationIdforDate:(id)arg1 ;
-(void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3 ;
@end

