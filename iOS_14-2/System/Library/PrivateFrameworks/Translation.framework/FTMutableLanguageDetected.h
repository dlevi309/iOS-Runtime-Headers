/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetected.h>

@class NSString, NSArray;

@interface FTMutableLanguageDetected : FTLanguageDetected

@property (nonatomic,copy) NSString * detected_locale; 
@property (nonatomic,copy) NSArray * predictions; 
-(id)init;
-(NSArray *)predictions;
-(void)setPredictions:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)detected_locale;
-(void)setDetected_locale:(NSString *)arg1 ;
@end

