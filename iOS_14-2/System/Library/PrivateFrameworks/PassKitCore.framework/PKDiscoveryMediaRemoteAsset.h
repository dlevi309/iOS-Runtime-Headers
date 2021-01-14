/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sha1Hex;
-(NSURL *)url;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

