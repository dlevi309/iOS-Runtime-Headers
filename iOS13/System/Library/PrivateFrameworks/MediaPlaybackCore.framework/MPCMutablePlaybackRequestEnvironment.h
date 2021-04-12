/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setPrivateListeningStateSource:(MPCPrivateListeningStateSource *)arg1 ;
-(void)setDelegationProperties:(MPCPlaybackDelegationProperties *)arg1 ;
@end

