/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICMusicSubscriptionStatus, NSString, ICURLBag;

@interface MPCPlaybackAccount : NSObject <NSCopying> {

	BOOL _hasCloudLibraryEnabled;
	BOOL _delegated;
	BOOL _activeAccount;
	BOOL _privateListeningEnabled;
	ICUserIdentity* _userIdentity;
	ICMusicSubscriptionStatus* _subscriptionStatus;
	NSString* _hashedDSID;
	NSString* _storeFrontIdentifier;
	ICURLBag* _bag;

}

@property (nonatomic,copy) NSString * hashedDSID;                                                        //@synthesize hashedDSID=_hashedDSID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudLibraryEnabled;                                                //@synthesize hasCloudLibraryEnabled=_hasCloudLibraryEnabled - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (assign,getter=isActiveAccount,nonatomic) BOOL activeAccount;                                  //@synthesize activeAccount=_activeAccount - In the implementation block
@property (assign,getter=isPrivateListeningEnabled,nonatomic) BOOL privateListeningEnabled;              //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (nonatomic,retain) ICURLBag * bag;                                                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                            //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) ICMusicSubscriptionStatus * subscriptionStatus;                           //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (getter=isDelegated,nonatomic,readonly) BOOL delegated;                                        //@synthesize delegated=_delegated - In the implementation block
@property (nonatomic,readonly) BOOL canAutoPlay; 
@property (nonatomic,readonly) BOOL hasCatalogPlaybackCapability; 
@property (nonatomic,readonly) BOOL usesLease; 
-(NSString *)storeFrontIdentifier;
-(ICUserIdentity *)userIdentity;
-(void)setPrivateListeningEnabled:(BOOL)arg1 ;
-(BOOL)hasCatalogPlaybackCapability;
-(BOOL)isPrivateListeningEnabled;
-(NSString *)hashedDSID;
-(BOOL)isDelegated;
-(ICURLBag *)bag;
-(void)setHashedDSID:(NSString *)arg1 ;
-(id)description;
-(void)setActiveAccount:(BOOL)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setBag:(ICURLBag *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canAutoPlay;
-(BOOL)isActiveAccount;
-(BOOL)hasCloudLibraryEnabled;
-(BOOL)usesLease;
-(id)initWithDelegatedUserIdentity:(id)arg1 ;
-(id)initWithUserIdentity:(id)arg1 subscriptionStatus:(id)arg2 ;
-(void)setHasCloudLibraryEnabled:(BOOL)arg1 ;
@end

