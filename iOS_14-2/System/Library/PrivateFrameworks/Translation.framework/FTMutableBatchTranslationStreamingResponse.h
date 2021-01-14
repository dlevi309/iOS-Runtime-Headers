/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationStreamingResponse.h>

@class FTBatchTranslationResponse, FTFinalBlazarResponse;

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTBatchTranslationResponse * contentAsFTBatchTranslationResponse; 
@property (nonatomic,copy) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
-(id)init;
-(void)setContentAsFTFinalBlazarResponse:(FTFinalBlazarResponse *)arg1 ;
-(void)setContentAsFTBatchTranslationResponse:(FTBatchTranslationResponse *)arg1 ;
-(long long)content_type;
-(FTBatchTranslationResponse *)contentAsFTBatchTranslationResponse;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

