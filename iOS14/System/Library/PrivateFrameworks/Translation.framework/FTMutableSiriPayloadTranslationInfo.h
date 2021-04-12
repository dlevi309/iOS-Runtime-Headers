/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSiriPayloadTranslationInfo.h>

@class NSString, FTRecognitionSausage;

@interface FTMutableSiriPayloadTranslationInfo : FTSiriPayloadTranslationInfo

@property (nonatomic,copy) NSString * pre_itn_payload; 
@property (nonatomic,copy) NSString * post_itn_payload; 
@property (nonatomic,copy) FTRecognitionSausage * pre_sausage_payload; 
-(id)init;
-(NSString *)pre_itn_payload;
-(void)setPre_itn_payload:(NSString *)arg1 ;
-(NSString *)post_itn_payload;
-(void)setPost_itn_payload:(NSString *)arg1 ;
-(FTRecognitionSausage *)pre_sausage_payload;
-(void)setPre_sausage_payload:(FTRecognitionSausage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

