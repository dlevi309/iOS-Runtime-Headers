/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@protocol MLCustomModel
@optional
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;

@required
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;

@end

