/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria> {

	BOOL _excludeFrequentLocations;
	BOOL _excludeHomeWorkLocations;

}

@property (assign,nonatomic) BOOL excludeFrequentLocations;              //@synthesize excludeFrequentLocations=_excludeFrequentLocations - In the implementation block
@property (assign,nonatomic) BOOL excludeHomeWorkLocations;              //@synthesize excludeHomeWorkLocations=_excludeHomeWorkLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setExcludeHomeWorkLocations:(BOOL)arg1 ;
-(void)setExcludeFrequentLocations:(BOOL)arg1 ;
-(BOOL)excludeFrequentLocations;
-(BOOL)excludeHomeWorkLocations;
@end

