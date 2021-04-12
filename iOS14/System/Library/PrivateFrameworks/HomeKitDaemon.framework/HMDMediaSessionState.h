/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking;
@class NSString, NSNumber;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {

	id<HMFLocking> _lock;
	NSString* _sessionIdentifier;
	long long _playbackState;
	long long _shuffleState;
	long long _repeatState;
	NSNumber* _volume;
	NSNumber* _muted;
	NSString* _mediaUniqueIdentifier;

}

@property (assign,nonatomic) long long playbackState;                          //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long shuffleState;                           //@synthesize shuffleState=_shuffleState - In the implementation block
@property (assign,nonatomic) long long repeatState;                            //@synthesize repeatState=_repeatState - In the implementation block
@property (copy) NSNumber * volume;                                            //@synthesize volume=_volume - In the implementation block
@property (copy) NSNumber * muted;                                             //@synthesize muted=_muted - In the implementation block
@property (copy) NSString * mediaUniqueIdentifier;                             //@synthesize mediaUniqueIdentifier=_mediaUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlaybackState:(long long)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(long long)playbackState;
-(id)dumpState;
-(NSString *)sessionIdentifier;
-(void)setMuted:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(NSNumber *)volume;
-(long long)shuffleState;
-(long long)repeatState;
-(NSString *)mediaUniqueIdentifier;
-(void)setShuffleState:(long long)arg1 ;
-(void)setRepeatState:(long long)arg1 ;
-(void)setMediaUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)muted;
@end

