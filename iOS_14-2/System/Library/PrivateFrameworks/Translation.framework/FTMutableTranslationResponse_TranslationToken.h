/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationResponse_TranslationToken.h>

@class NSString, FTAlignment;

@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken

@property (nonatomic,copy) NSString * token; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) FTAlignment * mt_alignment; 
@property (assign,nonatomic) BOOL add_space_after; 
-(float)confidence;
-(id)init;
-(void)setAdd_space_after:(BOOL)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)add_space_after;
-(FTAlignment *)mt_alignment;
-(void)setMt_alignment:(FTAlignment *)arg1 ;
-(NSString *)token;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

