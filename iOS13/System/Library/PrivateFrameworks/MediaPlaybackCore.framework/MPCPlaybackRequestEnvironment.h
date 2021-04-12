/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, ICUserIdentity;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _clientVersion;
	MPCPlaybackDelegationProperties* _delegationProperties;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	MPCPrivateListeningStateSource* _privateListeningStateSource;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                                                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                                     //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                                        //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,copy,readonly) MPCPlaybackDelegationProperties * delegationProperties;                    //@synthesize delegationProperties=_delegationProperties - In the implementation block
@property (nonatomic,copy,readonly) MPCPrivateListeningStateSource * privateListeningStateSource;              //@synthesize privateListeningStateSource=_privateListeningStateSource - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                                  //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activeAccountRequestEnvironment;
+(id)requestEnvironmentWithUserIdentity:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(NSString *)clientIdentifier;
-(NSString *)clientVersion;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(id)initWithUserIdentity:(id)arg1 ;
-(id)_createStoreRequestContext;
-(MPCPrivateListeningStateSource *)privateListeningStateSource;
-(MPCPlaybackDelegationProperties *)delegationProperties;
-(id)rectifiedPlaybackRequestEnvironmentForAccountManager:(id)arg1 reasons:(id*)arg2 ;
-(id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1 ;
@end

