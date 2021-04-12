/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <libobjc.A.dylib/DESRecipeEvaluation.h>

@protocol DESRecipeEvaluation;
@class NSString;

@interface DESExceptionCatchingEvaluator : NSObject <DESRecipeEvaluation> {

	id<DESRecipeEvaluation> _evaluator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 error:(id*)arg5 ;
-(id)telemetryWithRecordSet:(id)arg1 ;
-(BOOL)shouldDownloadAttachmentWithURL:(id)arg1 recipe:(id)arg2 recordInfo:(id)arg3 ;
-(id)serverSafeRecordInfoWithRecordInfo:(id)arg1 ;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 error:(id*)arg3 ;
-(id)evaluateRecipe:(id)arg1 matchingRecordSet:(id)arg2 binaryResult:(id*)arg3 error:(id*)arg4 ;
-(void)performEvaluation:(id)arg1 ;
-(id)initWithEvaluator:(id)arg1 ;
@end

