/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSDate *)expirationDate;
-(NSDictionary *)requiredHTTPHeaders;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 ;
@end

