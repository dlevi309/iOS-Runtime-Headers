/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface FCUserVectorModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _aggregates;

}

@property (nonatomic,retain) MLMultiArray * aggregates;              //@synthesize aggregates=_aggregates - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)aggregates;
-(id)initWithAggregates:(id)arg1 ;
-(void)setAggregates:(MLMultiArray *)arg1 ;
@end

