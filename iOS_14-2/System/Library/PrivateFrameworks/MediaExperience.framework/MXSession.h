/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


#import <MediaExperience/MediaExperience-Structs.h>
@class NSString;

@interface MXSession : NSObject {

	opaqueCMSessionRef mCoreSession;
	long long mCoreSessionID;
	BOOL mIsMuted;
	NSString* mDescription;
	int mClientType;
	BOOL mIsPlaying;
	long long mID;
	unsigned mPreferredNumberOfOutputChannels;
	double mPreferredOutputSampleRate;
	NSString* mPreferredAudioHardwareFormat;
	NSString* mMutePriority;
	BOOL mIAmPiP;
	BOOL mDoesntActuallyPlayAudio;

}
+(unsigned)getResolvedPreferredNumberOfOutputChannels:(opaqueCMSession*)arg1 ;
+(int)updateIsPlaying:(opaqueCMSession*)arg1 ;
+(id)copyMXSessionForID:(long long)arg1 ;
+(int)updatePreferredOutputSampleRate:(opaqueCMSession*)arg1 ;
+(BOOL)_audioQueueOptionsForMute:(long long)arg1 ;
+(BOOL)isCoreSessionFormatValidForMaxOutputChannels:(id)arg1 ;
+(int)updatePreferredNumberOfOutputChannels:(opaqueCMSession*)arg1 ;
+(int)updatePreferredAudioHardwareFormat:(opaqueCMSession*)arg1 withMaxOutputChannels:(unsigned)arg2 andCalledFromDealloc:(BOOL)arg3 ;
+(int)updateDoesntActuallyPlayAudio:(opaqueCMSession*)arg1 ;
+(BOOL)audioQueueOptionsForMute:(long long)arg1 ;
-(BOOL)getIsMuted;
-(int)setID:(long long)arg1 ;
-(int)setIAmPiP:(BOOL)arg1 ;
-(id)initWithSession:(opaqueCMSessionRef)arg1 ;
-(id)info;
-(int)getClientType;
-(id)getMutePriority;
-(int)setPreferredNumberOfOutputChannels:(unsigned)arg1 ;
-(BOOL)getDoesntActuallyPlayAudio;
-(unsigned)getPreferredNumberOfOutputChannels;
-(void)postIsMutedDidChange;
-(BOOL)getIsPlaying;
-(int)setPreferredAudioHardwareFormat:(id)arg1 ;
-(int)setAttributeForKey:(id)arg1 andValue:(const void*)arg2 ;
-(int)copyAttributeForKey:(id)arg1 withValueOut:(void*)arg2 ;
-(id)_initWithSession:(opaqueCMSession*)arg1 ;
-(id)description;
-(double)getPreferredOutputSampleRate;
-(opaqueCMSession*)getCoreSession;
-(void)mute;
-(int)setIsPlaying:(BOOL)arg1 ;
-(void)_dealloc;
-(int)_setAttributeForKey:(id)arg1 andValue:(const void*)arg2 ;
-(BOOL)getActuallyPlaysAudio;
-(int)setDoesntActuallyPlayAudio:(BOOL)arg1 ;
-(int)setClientType:(int)arg1 ;
-(int)setPreferredOutputSampleRate:(double)arg1 ;
-(void)dumpInfo;
-(int)setIsMuted:(BOOL)arg1 ;
-(id)getClientTypeAsString;
-(int)_copyAttributeForKey:(id)arg1 withValueOut:(void*)arg2 ;
-(int)setMutePriority:(id)arg1 ;
-(id)getPreferredAudioHardwareFormat;
-(void)unmute;
-(BOOL)getIAmPiP;
-(void)dealloc;
-(long long)getID;
@end

