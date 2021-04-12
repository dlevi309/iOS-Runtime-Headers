/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CRKIdentity, CRKIPAddressProviding;
@class NSArray, NSObject;

@interface CRKHostResourcesConfiguration : NSObject <NSCopying> {

	unsigned short _port;
	NSArray* _resourceURLs;
	id<CRKIdentity> _serverIdentity;
	NSArray* _trustedCertificates;
	unsigned long long _maximumAllowedDownloads;
	NSObject*<CRKIPAddressProviding> _IPAddressProvider;

}

@property (nonatomic,copy,readonly) NSArray * resourceURLs;                                   //@synthesize resourceURLs=_resourceURLs - In the implementation block
@property (nonatomic,readonly) id<CRKIdentity> serverIdentity;                                //@synthesize serverIdentity=_serverIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trustedCertificates;                            //@synthesize trustedCertificates=_trustedCertificates - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAllowedDownloads;                      //@synthesize maximumAllowedDownloads=_maximumAllowedDownloads - In the implementation block
@property (assign,nonatomic) unsigned short port;                                             //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSObject*<CRKIPAddressProviding> IPAddressProvider;              //@synthesize IPAddressProvider=_IPAddressProvider - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(unsigned short)port;
-(NSArray *)resourceURLs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CRKIdentity>)serverIdentity;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3 ;
-(NSObject*<CRKIPAddressProviding>)IPAddressProvider;
-(id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 ;
-(NSArray *)trustedCertificates;
-(unsigned long long)maximumAllowedDownloads;
-(void)setMaximumAllowedDownloads:(unsigned long long)arg1 ;
-(void)setIPAddressProvider:(NSObject*<CRKIPAddressProviding>)arg1 ;
@end

