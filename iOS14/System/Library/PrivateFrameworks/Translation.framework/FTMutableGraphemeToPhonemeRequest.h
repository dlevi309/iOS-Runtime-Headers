/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTGraphemeToPhonemeRequest.h>

@class NSString, FTContextWithPronHints;

@interface FTMutableGraphemeToPhonemeRequest : FTGraphemeToPhonemeRequest

@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) FTContextWithPronHints * context_with_pron_hints; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)orthography;
-(FTContextWithPronHints *)context_with_pron_hints;
-(void)setContext_with_pron_hints:(FTContextWithPronHints *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

