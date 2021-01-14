/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningInterestingnessCriteria : NSObject <PGMeaningCriteria> {

	BOOL _mustBeInteresting;

}

@property (assign,nonatomic) BOOL mustBeInteresting;                //@synthesize mustBeInteresting=_mustBeInteresting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(void)setMustBeInteresting:(BOOL)arg1 ;
-(BOOL)mustBeInteresting;
-(BOOL)passesForMomentNode:(id)arg1 ;
@end

