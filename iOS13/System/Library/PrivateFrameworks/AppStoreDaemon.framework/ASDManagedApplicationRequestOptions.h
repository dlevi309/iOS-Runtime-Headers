/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSNumber *)itemIdentifier;
-(NSString *)bundleVersion;
-(NSNumber *)externalVersionIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(long long)requestType;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(BOOL)arg5 ;
-(BOOL)skipDownloads;
@end

