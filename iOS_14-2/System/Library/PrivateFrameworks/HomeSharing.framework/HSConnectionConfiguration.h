/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, ICUserIdentityStore, NSURL, NSString, NSNumber;

@interface HSConnectionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	ICUserIdentity* _userIdentity;
	ICUserIdentityStore* _userIdentityStore;
	NSURL* _baseURL;
	NSString* _libraryBagKey;
	NSString* _buildIdentifier;
	NSString* _purchaseClientIdentifier;
	long long _requestReason;
	NSNumber* _familyMemberStoreID;

}

@property (nonatomic,copy) ICUserIdentity * userIdentity;                            //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * userIdentityStore;              //@synthesize userIdentityStore=_userIdentityStore - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * libraryBagKey;                                 //@synthesize libraryBagKey=_libraryBagKey - In the implementation block
@property (nonatomic,copy) NSString * buildIdentifier;                               //@synthesize buildIdentifier=_buildIdentifier - In the implementation block
@property (nonatomic,copy) NSString * purchaseClientIdentifier;                      //@synthesize purchaseClientIdentifier=_purchaseClientIdentifier - In the implementation block
@property (assign,nonatomic) long long requestReason;                                //@synthesize requestReason=_requestReason - In the implementation block
@property (nonatomic,copy) NSNumber * familyMemberStoreID;                           //@synthesize familyMemberStoreID=_familyMemberStoreID - In the implementation block
+(BOOL)supportsSecureCoding;
-(ICUserIdentityStore *)userIdentityStore;
-(ICUserIdentity *)userIdentity;
-(void)setRequestReason:(long long)arg1 ;
-(NSNumber *)familyMemberStoreID;
-(NSURL *)baseURL;
-(id)init;
-(NSString *)libraryBagKey;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)requestReason;
-(void)setFamilyMemberStoreID:(NSNumber *)arg1 ;
-(void)setPurchaseClientIdentifier:(NSString *)arg1 ;
-(void)setLibraryBagKey:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBuildIdentifier:(NSString *)arg1 ;
-(NSString *)buildIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(NSString *)purchaseClientIdentifier;
@end

