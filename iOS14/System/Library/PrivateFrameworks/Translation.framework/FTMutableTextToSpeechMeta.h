/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechMeta.h>

@class FTTextToSpeechVoice, FTTextToSpeechResource;

@interface FTMutableTextToSpeechMeta : FTTextToSpeechMeta

@property (nonatomic,copy) FTTextToSpeechVoice * voice; 
@property (nonatomic,copy) FTTextToSpeechResource * resource; 
-(FTTextToSpeechVoice *)voice;
-(void)setVoice:(FTTextToSpeechVoice *)arg1 ;
-(id)init;
-(void)setResource:(FTTextToSpeechResource *)arg1 ;
-(FTTextToSpeechResource *)resource;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

