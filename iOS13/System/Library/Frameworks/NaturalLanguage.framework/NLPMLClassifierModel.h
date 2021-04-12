/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLModel.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface NLPMLClassifierModel : NLModel <MLCustomModel> {

	MLModelDescription* _modelDescription;

}

@property (copy,readonly) MLModelDescription * modelDescription; 
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end

