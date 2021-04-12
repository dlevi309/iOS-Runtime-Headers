/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSString, NSNumber, NSObject;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {

	NSString* _sessionIdentifier;
	long long _playbackState;
	long long _shuffleState;
	long long _repeatState;
	NSNumber* _volume;
	NSNumber* _muted;
	NSString* _mediaUniqueIdentifier;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;               //@synthesize propertyQueue=_propertyQueue - In the implementation block
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSString *)sessionIdentifier;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(NSNumber *)muted;
-(void)setMuted:(NSNumber *)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(id)dumpState;
-(long long)shuffleState;
-(long long)repeatState;
-(NSString *)mediaUniqueIdentifier;
-(void)setShuffleState:(long long)arg1 ;
-(void)setRepeatState:(long long)arg1 ;
-(void)setMediaUniqueIdentifier:(NSString *)arg1 ;
@end

