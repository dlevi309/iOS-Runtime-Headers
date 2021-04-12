/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationRequest.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationRequest : FTBatchTranslationRequest

@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * task; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSArray * paragraphs; 
@property (nonatomic,copy) NSString * app_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long opt_in_status; 
-(NSString *)task;
-(id)init;
-(NSString *)app_id;
-(void)setTask:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)source_language;
-(NSString *)target_language;
-(NSString *)request_id;
-(long long)opt_in_status;
-(void)setOpt_in_status:(long long)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(NSString *)session_id;
-(NSArray *)paragraphs;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

