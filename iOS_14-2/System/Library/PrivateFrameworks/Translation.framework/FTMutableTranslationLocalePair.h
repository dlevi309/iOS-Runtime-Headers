/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationLocalePair.h>

@class NSString;

@interface FTMutableTranslationLocalePair : FTTranslationLocalePair

@property (nonatomic,copy) NSString * source_locale; 
@property (nonatomic,copy) NSString * target_locale; 
-(id)init;
-(NSString *)source_locale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource_locale:(NSString *)arg1 ;
-(NSString *)target_locale;
-(void)setTarget_locale:(NSString *)arg1 ;
@end

