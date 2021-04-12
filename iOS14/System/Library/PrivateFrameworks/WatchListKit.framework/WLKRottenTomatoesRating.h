/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

