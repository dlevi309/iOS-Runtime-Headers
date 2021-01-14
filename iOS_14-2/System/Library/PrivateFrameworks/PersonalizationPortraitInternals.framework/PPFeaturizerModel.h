/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class NSString, NSArray;

@interface PPFeaturizerModel : NSObject <MLCustomModel> {

	NSString* _inputName;
	NSString* _outputName;
	NSString* _operation;
	NSArray* _param;

}
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end

