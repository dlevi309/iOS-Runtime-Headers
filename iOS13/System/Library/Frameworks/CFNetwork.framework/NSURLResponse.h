/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;
	URLResponse* __cf_resp_data;

}

@property (assign) URLResponse* _cf_resp_data;                       //@synthesize _cf_resp_data=__cf_resp_data - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(BOOL)supportsSecureCoding;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(id)_responseWithCFURLResponse:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(URLResponse*)_inner;
-(id)_initWithInternal:(id)arg1 ;
-(id)_initWithCFURLResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(NSString *)textEncodingName;
-(long long)expectedContentLength;
-(NSString *)suggestedFilename;
-(URLResponse*)_cf_resp_data;
-(void)set_cf_resp_data:(URLResponse*)arg1 ;
-(id)_peerCertificateChain;
-(id)_CFURLResponse;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(double)_calculatedExpiration;
@end

