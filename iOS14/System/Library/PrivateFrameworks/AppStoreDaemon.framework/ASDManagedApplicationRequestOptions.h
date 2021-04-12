/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString;

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions {

	BOOL _skipDownloads;
	NSNumber* _accountIdentifier;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _itemIdentifier;
	long long _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                          //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL skipDownloads;                                //@synthesize skipDownloads=_skipDownloads - In the implementation block
@property (assign,nonatomic) long long requestType;                               //@synthesize requestType=_requestType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)itemIdentifier;
-(void)setRequestType:(long long)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(long long)requestType;
-(NSNumber *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(BOOL)arg5 ;
-(BOOL)skipDownloads;
-(NSString *)bundleVersion;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

