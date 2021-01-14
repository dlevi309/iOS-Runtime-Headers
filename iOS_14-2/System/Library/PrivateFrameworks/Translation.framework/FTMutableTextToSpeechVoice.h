/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechVoice.h>

@class NSString;

@interface FTMutableTextToSpeechVoice : FTTextToSpeechVoice

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * version; 
@property (nonatomic,copy) NSString * quality; 
@property (nonatomic,copy) NSString * type; 
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)quality;
-(NSString *)name;
-(NSString *)type;
-(void)setQuality:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

