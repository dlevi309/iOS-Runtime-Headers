/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class NSCountedSet, NSString;

@interface PPMostCommonFeatureValue : NSObject <MLCustomModel> {

	NSCountedSet* _itemCounts;
	NSString* _featureName;
	NSString* _dominantItemFeatureValueKey;
	NSString* _dominantItemCountFeatureValueKey;

}
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)itemCounts;
-(id)_dominantItem;
@end

