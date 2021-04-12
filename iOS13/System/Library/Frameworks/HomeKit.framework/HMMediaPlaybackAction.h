/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSNumber, MPPlaybackArchive, HMFUnfairLock, NSString, NSUUID;

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	NSSet* _mediaProfiles;
	long long _state;
	NSNumber* _volume;
	MPPlaybackArchive* _playbackArchive;
	HMFUnfairLock* _lock;

}

@property (nonatomic,copy) NSSet * mediaProfiles;                              //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;              //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
+(BOOL)isSupportedForHome:(id)arg1 ;
+(id)mediaPlaybackActionWithProtoBuf:(id)arg1 home:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(BOOL)_handleUpdates:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)encodeAsProtoBuf;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 uuid:(id)arg5 ;
-(NSSet *)mediaProfiles;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)initWithPlaybackAction:(id)arg1 uuid:(id)arg2 ;
-(void)_updateWithAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_updateWithSerializedAction:(id)arg1 home:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 ;
-(id)accessoryProfiles;
-(void)updateWithAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

