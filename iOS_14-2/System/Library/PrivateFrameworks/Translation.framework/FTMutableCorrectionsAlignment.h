/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTCorrectionsAlignment.h>

@class NSString;

@interface FTMutableCorrectionsAlignment : FTCorrectionsAlignment

@property (nonatomic,copy) NSString * original_words; 
@property (nonatomic,copy) NSString * corrected_words; 
-(id)init;
-(NSString *)original_words;
-(void)setOriginal_words:(NSString *)arg1 ;
-(NSString *)corrected_words;
-(void)setCorrected_words:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

