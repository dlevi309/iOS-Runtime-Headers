/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class NSSet, NSNumber, MPPlaybackArchive, HMDHome, NSMutableSet, NSArray, NSString;

@interface HMDMediaPlaybackAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	BOOL _encodePlaybackArchiveForExecution;
	NSSet* _mediaProfiles;
	NSNumber* _volume;
	MPPlaybackArchive* _playbackArchive;
	long long _state;
	HMDHome* _home;
	NSMutableSet* _profileUUIDs;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSSet * mediaProfiles;                                  //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;                  //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (assign,nonatomic) long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableSet * profileUUIDs;                          //@synthesize profileUUIDs=_profileUUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * characteristicWriteRequests; 
@property (assign,nonatomic) BOOL encodePlaybackArchiveForExecution;               //@synthesize encodePlaybackArchiveForExecution=_encodePlaybackArchiveForExecution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(BOOL)isPlaybackActionValidWithProfiles:(id)arg1 state:(long long)arg2 volume:(id)arg3 ;
-(NSString *)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HMDHome *)home;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)validate;
-(void)setHome:(HMDHome *)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(Class)modelClass;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)mediaProfiles;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)stateDump;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
-(BOOL)configureWithHome:(id)arg1 ;
-(id)modelObjectWithUpdatedMediaProfiles:(id)arg1 ;
-(NSArray *)characteristicWriteRequests;
-(BOOL)encodePlaybackArchiveForExecution;
-(id)initWithUUID:(id)arg1 mediaProfiles:(id)arg2 playbackState:(long long)arg3 volume:(id)arg4 playbackArchive:(id)arg5 actionSet:(id)arg6 ;
-(NSMutableSet *)profileUUIDs;
-(void)_processPlaybackActionModelUpdated:(id)arg1 message:(id)arg2 ;
-(void)setProfileUUIDs:(NSMutableSet *)arg1 ;
-(void)setEncodePlaybackArchiveForExecution:(BOOL)arg1 ;
@end

