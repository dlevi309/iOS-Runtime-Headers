/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface _ATXRecipeEvaluation : NSObject
+(double)kendallTauFirstItems:(SCD_Struct_AT45*)arg1 secondItems:(SCD_Struct_AT45*)arg2 count:(unsigned long long)arg3 ;
+(unsigned long long)rankOfScore:(double)arg1 inputItems:(SCD_Struct_AT45*)arg2 count:(unsigned long long)arg3 ;
+(id)inputScoresFromItem:(SCD_Struct_AT45*)arg1 ;
+(id)evaluateRecipe:(id)arg1 recordData:(id)arg2 ;
+(id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 errorDomain:(id)arg5 error:(id*)arg6 ;
@end

