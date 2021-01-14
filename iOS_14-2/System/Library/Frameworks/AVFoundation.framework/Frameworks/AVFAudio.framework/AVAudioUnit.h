/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)manufacturerName;
-(BOOL)setValue:(float)arg1 forParam:(unsigned)arg2 ;
-(BOOL)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2 ;
-(float)valueForParam:(unsigned)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(NSString *)name;
-(AudioComponentDescription)audioComponentDescription;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(unsigned long long)version;
@end

