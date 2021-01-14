/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTWord.h>

@class NSString, NSData;

@interface FTMutableWord : FTWord

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSData * pronunciations; 
@property (assign,nonatomic) int frequency; 
@property (nonatomic,copy) NSString * tag; 
-(void)setFrequency:(int)arg1 ;
-(int)frequency;
-(id)init;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(NSString *)orthography;
-(NSData *)pronunciations;
-(void)setPronunciations:(NSData *)arg1 ;
-(void)pronunciations:(/*^block*/id)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

