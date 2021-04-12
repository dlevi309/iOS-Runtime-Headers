/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate, NSDictionary;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _url;
	NSDate* _expirationDate;
	NSDictionary* _requiredHTTPHeaders;

}

@property (readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (readonly) NSDate * expirationDate;                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy,readonly) NSDictionary * requiredHTTPHeaders;              //@synthesize requiredHTTPHeaders=_requiredHTTPHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)requiredHTTPHeaders;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

