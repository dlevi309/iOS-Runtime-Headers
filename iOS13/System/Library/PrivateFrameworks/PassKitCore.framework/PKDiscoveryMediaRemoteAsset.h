/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface PKDiscoveryMediaRemoteAsset : NSObject <NSSecureCoding> {

	NSString* _sha1Hex;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * sha1Hex;              //@synthesize sha1Hex=_sha1Hex - In the implementation block
@property (nonatomic,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)sha1Hex;
@end

