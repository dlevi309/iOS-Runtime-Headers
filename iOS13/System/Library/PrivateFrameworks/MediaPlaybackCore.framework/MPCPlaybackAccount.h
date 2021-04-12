/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, NSString;

@interface MPCPlaybackAccount : NSObject <NSCopying> {

	BOOL _hasCloudLibraryEnabled;
	BOOL _delegated;
	BOOL _activeAccount;
	ICUserIdentity* _userIdentity;
	NSString* _hashedDSID;
	unsigned long long _subscriptionCapabilities;
	NSString* _storeFrontIdentifier;

}

@property (nonatomic,copy) NSString * hashedDSID;                                        //@synthesize hashedDSID=_hashedDSID - In the implementation block
@property (assign,nonatomic) BOOL hasCloudLibraryEnabled;                                //@synthesize hasCloudLibraryEnabled=_hasCloudLibraryEnabled - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (assign,getter=isDelegated,nonatomic) BOOL delegated;                          //@synthesize delegated=_delegated - In the implementation block
@property (assign,getter=isActiveAccount,nonatomic) BOOL activeAccount;                  //@synthesize activeAccount=_activeAccount - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                            //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionCapabilities;              //@synthesize subscriptionCapabilities=_subscriptionCapabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setDelegated:(BOOL)arg1 ;
-(NSString *)storeFrontIdentifier;
-(BOOL)isDelegated;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setActiveAccount:(BOOL)arg1 ;
-(NSString *)hashedDSID;
-(void)setHashedDSID:(NSString *)arg1 ;
-(BOOL)isActiveAccount;
-(unsigned long long)subscriptionCapabilities;
-(BOOL)hasCloudLibraryEnabled;
-(id)initWithUserIdentity:(id)arg1 subscriptionCapabilities:(unsigned long long)arg2 ;
-(void)setHasCloudLibraryEnabled:(BOOL)arg1 ;
@end

