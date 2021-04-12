/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSArray, NSUUID;

@interface ASDManifestRequest : NSObject <NSSecureCoding> {

	BOOL _pinningRevocationCheckRequired;
	NSDictionary* _manifest;
	NSURL* _manifestURL;
	long long _archiveType;
	NSArray* _certificates;
	NSUUID* _requestIdentifier;

}

@property (retain) NSDictionary * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (retain) NSURL * manifestURL;                              //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign) long long archiveType;                            //@synthesize archiveType=_archiveType - In the implementation block
@property (retain) NSArray * certificates;                           //@synthesize certificates=_certificates - In the implementation block
@property (assign) BOOL pinningRevocationCheckRequired;              //@synthesize pinningRevocationCheckRequired=_pinningRevocationCheckRequired - In the implementation block
@property (retain) NSUUID * requestIdentifier;                       //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(long long)archiveType;
-(void)setArchiveType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)pinningRevocationCheckRequired;
-(NSArray *)certificates;
-(void)setPinningRevocationCheckRequired:(BOOL)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(NSDictionary *)manifest;
-(id)initWithCoder:(id)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
@end

