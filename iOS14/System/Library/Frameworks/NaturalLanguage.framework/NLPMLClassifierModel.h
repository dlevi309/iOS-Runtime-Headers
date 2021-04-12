/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLModel.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface NLPMLClassifierModel : NLModel <MLCustomModel> {

	MLModelDescription* _modelDescription;

}

@property (copy,readonly) MLModelDescription * modelDescription; 
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
@end

