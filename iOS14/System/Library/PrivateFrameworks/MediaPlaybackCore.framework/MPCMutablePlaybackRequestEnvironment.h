/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlaybackRequestEnvironment.h>

@class NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, ICUserIdentity;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * clientVersion; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (nonatomic,copy) MPCPlaybackDelegationProperties * delegationProperties; 
@property (nonatomic,copy) MPCPrivateListeningStateSource * privateListeningStateSource; 
@property (nonatomic,retain) ICUserIdentity * userIdentity; 
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setPrivateListeningStateSource:(MPCPrivateListeningStateSource *)arg1 ;
-(void)setDelegationProperties:(MPCPlaybackDelegationProperties *)arg1 ;
@end

