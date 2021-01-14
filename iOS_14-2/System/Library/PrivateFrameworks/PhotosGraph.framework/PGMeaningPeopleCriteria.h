/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria> {

	unsigned long long _minimumNumberOfPeople;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfPeople;              //@synthesize minimumNumberOfPeople=_minimumNumberOfPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setMinimumNumberOfPeople:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfPeople;
@end

