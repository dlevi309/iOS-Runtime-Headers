/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTWebTranslationInfo.h>

@class NSString, NSArray;

@interface FTMutableWebTranslationInfo : FTWebTranslationInfo

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * spans; 
-(NSArray *)spans;
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setSpans:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

