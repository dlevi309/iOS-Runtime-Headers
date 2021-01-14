/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechCacheObject.h>

@class NSData, NSArray;

@interface FTMutableTextToSpeechCacheObject : FTTextToSpeechCacheObject

@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
-(id)init;
-(NSData *)audio;
-(void)audio:(/*^block*/id)arg1 ;
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(void)setAudio:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

