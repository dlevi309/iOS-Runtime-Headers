/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchRecoverStreamingResponse.h>

@class FTPronGuessResponse, FTBatchRecoverFinalResponse;

@interface FTMutableBatchRecoverStreamingResponse : FTBatchRecoverStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTPronGuessResponse * contentAsFTPronGuessResponse; 
@property (nonatomic,copy) FTBatchRecoverFinalResponse * contentAsFTBatchRecoverFinalResponse; 
-(FTBatchRecoverFinalResponse *)contentAsFTBatchRecoverFinalResponse;
-(void)setContentAsFTBatchRecoverFinalResponse:(FTBatchRecoverFinalResponse *)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTPronGuessResponse *)contentAsFTPronGuessResponse;
-(void)setContentAsFTPronGuessResponse:(FTPronGuessResponse *)arg1 ;
@end

