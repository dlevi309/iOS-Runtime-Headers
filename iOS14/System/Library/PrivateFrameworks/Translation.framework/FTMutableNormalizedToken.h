/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTNormalizedToken.h>

@class NSString, NSArray;

@interface FTMutableNormalizedToken : FTNormalizedToken

@property (nonatomic,copy) NSString * original_token; 
@property (nonatomic,copy) NSArray * nbest_variants; 
-(id)init;
-(NSString *)original_token;
-(void)setOriginal_token:(NSString *)arg1 ;
-(NSArray *)nbest_variants;
-(void)setNbest_variants:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

