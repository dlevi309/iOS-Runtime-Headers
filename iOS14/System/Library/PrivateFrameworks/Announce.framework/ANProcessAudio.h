/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


#import <Announce/Announce-Structs.h>
@interface ANProcessAudio : NSObject
+(BOOL)process:(id)arg1 to:(id)arg2 withOptions:(unsigned long long)arg3 error:(id*)arg4 ;
+(AudioComponentDescription)_lookupComponent:(unsigned long long)arg1 ;
+(id)_ANAudioEffectToName:(unsigned long long)arg1 ;
+(BOOL)_configureEngine:(id)arg1 player:(id)arg2 effect:(id)arg3 sourceFile:(id)arg4 error:(id*)arg5 ;
+(void)_renderAudioTo:(id)arg1 length:(long long)arg2 engine:(id)arg3 error:(id*)arg4 ;
+(id)_lookupTunings:(unsigned long long)arg1 ;
@end

