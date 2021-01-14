/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@class NSArray, NSDate;

@interface _ICResultCache : NSObject {

	NSArray* _cachedResults;
	NSDate* _start;
	double _ttlInSeconds;

}
-(void)clear;
-(id)searchWithTrigger:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)searchWithValue:(id)arg1 ;
-(id)initWithTTL:(double)arg1 ;
-(BOOL)fuzzyMatchItem:(id)arg1 withValue:(id)arg2 ;
@end

