/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) unsigned long long siriInputSource; 
@property (readonly) BOOL supportsSoftwareVolume; 
@property (readonly) BOOL supportsDoAP; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(RouteDescriptionImpl*)privateGetImplementation;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)siriRemoteInputIdentifier;
-(unsigned long long)siriInputSource;
-(BOOL)supportsDoAP;
-(BOOL)supportsSoftwareVolume;
@end

