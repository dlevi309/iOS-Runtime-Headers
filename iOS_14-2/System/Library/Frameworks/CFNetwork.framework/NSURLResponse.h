/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSDictionary, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;
	URLResponse* __cf_resp_data;

}

@property (assign) URLResponse* _cf_resp_data;                         //@synthesize _cf_resp_data=__cf_resp_data - In the implementation block
@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(NSString *)MIMEType;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(URLResponse*)_cf_resp_data;
-(NSString *)suggestedFilename;
-(void)_setMIMEType:(id)arg1 ;
-(id)_peerCertificateChain;
-(double)_calculatedExpiration;
-(id)init;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(CFURLResponseRef)_CFURLResponse;
-(BOOL)_mustRevalidate;
-(void)set_cf_resp_data:(URLResponse*)arg1 ;
-(id)_lastModifiedDate;
-(id)_initWithInternal:(id)arg1 ;
-(double)_freshnessLifetime;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)statusCode;
-(id)description;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(URLResponse*)_inner;
-(long long)expectedContentLength;
-(NSString *)textEncodingName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)allHeaderFields;
-(void)dealloc;
@end

