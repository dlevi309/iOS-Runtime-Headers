/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject {

	unsigned long long _freshness;
	NSNumber* _freshnessPercentage;

}

@property (nonatomic,readonly) unsigned long long freshness;                     //@synthesize freshness=_freshness - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * freshnessPercentage;              //@synthesize freshnessPercentage=_freshnessPercentage - In the implementation block
+(unsigned long long)freshnessForString:(id)arg1 ;
-(id)init;
-(unsigned long long)freshness;
-(id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2 ;
-(NSNumber *)freshnessPercentage;
@end

