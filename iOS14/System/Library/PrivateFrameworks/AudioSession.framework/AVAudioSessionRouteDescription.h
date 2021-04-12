/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) unsigned long long siriInputSource; 
@property (readonly) BOOL supportsSoftwareVolume; 
@property (readonly) BOOL supportsDoAP; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * outputs; 
-(id)init;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(BOOL)supportsSoftwareVolume;
-(id)description;
-(RouteDescriptionImpl*)privateGetImplementation;
-(unsigned long long)siriInputSource;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)supportsDoAP;
-(NSString *)siriRemoteInputIdentifier;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

