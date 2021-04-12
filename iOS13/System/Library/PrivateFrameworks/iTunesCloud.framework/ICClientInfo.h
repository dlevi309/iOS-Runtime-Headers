/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _processName;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	NSString* _bagProfile;
	NSString* _bagProfileVersion;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * processName;                             //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                           //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bagProfile; 
@property (nonatomic,copy,readonly) NSString * bagProfileVersion; 
+(BOOL)supportsSecureCoding;
+(id)defaultInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)processName;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)clientBundleIdentifier;
-(NSString *)clientVersion;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(NSString *)bagProfile;
-(NSString *)bagProfileVersion;
-(id)_clientInfoCopyWithClass:(Class)arg1 ;
-(id)initWithSystemApplicationType:(long long)arg1 ;
@end

