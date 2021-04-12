/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@class NSArray, NSDate;

@interface _ICResultCache : NSObject {

	NSArray* _cachedResults;
	NSDate* _start;
	double _ttlInSeconds;

}
-(void)clear;
-(id)initWithTTL:(double)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)searchWithTrigger:(id)arg1 ;
-(id)searchWithValue:(id)arg1 ;
-(BOOL)fuzzyMatchItem:(id)arg1 withValue:(id)arg2 ;
@end

