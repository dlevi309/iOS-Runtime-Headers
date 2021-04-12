/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(unsigned long long)version;
-(NSString *)manufacturerName;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(AudioComponentDescription)audioComponentDescription;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(float)arg1 forParam:(unsigned)arg2 ;
-(float)valueForParam:(unsigned)arg1 ;
@end

