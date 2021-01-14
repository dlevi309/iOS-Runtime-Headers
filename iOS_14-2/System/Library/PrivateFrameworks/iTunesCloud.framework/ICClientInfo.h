/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_clientInfoForCloudDaemonOriginatedMusicKitRequestWithRequestingBundleIdentifier:(id)arg1 ;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bundleIdentifier:(id)arg3 ;
-(NSString *)clientBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(id)initWithSystemApplicationType:(long long)arg1 ;
-(NSString *)bagProfile;
-(NSString *)processName;
-(NSString *)clientVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_clientInfoCopyWithClass:(Class)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bagProfileVersion;
@end

