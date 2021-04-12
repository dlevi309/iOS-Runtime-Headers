/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSArray, NSString;

@interface PGMeaningROICriteria : NSObject <PGMeaningCriteria> {

	NSArray* _positiveROIs;
	NSArray* _negativeROIs;
	unsigned long long _minimumNumberOfROIs;

}

@property (nonatomic,retain) NSArray * positiveROIs;                              //@synthesize positiveROIs=_positiveROIs - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfROIs;              //@synthesize minimumNumberOfROIs=_minimumNumberOfROIs - In the implementation block
@property (nonatomic,retain) NSArray * negativeROIs;                              //@synthesize negativeROIs=_negativeROIs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setNegativeROIs:(NSArray *)arg1 ;
-(void)setMinimumNumberOfROIs:(unsigned long long)arg1 ;
-(void)setPositiveROIs:(NSArray *)arg1 ;
-(NSArray *)positiveROIs;
-(NSArray *)negativeROIs;
-(unsigned long long)minimumNumberOfROIs;
@end

