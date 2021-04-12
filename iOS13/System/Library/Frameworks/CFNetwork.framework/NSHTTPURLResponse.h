/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLResponse.h>

@class NSHTTPURLResponseInternal, NSDictionary;

@interface NSHTTPURLResponse : NSURLResponse {

	NSHTTPURLResponseInternal* _httpInternal;

}

@property (readonly) long long statusCode; 
@property (copy,readonly) NSDictionary * allHeaderFields; 
+(BOOL)supportsSecureCoding;
+(BOOL)isErrorStatusCode:(long long)arg1 ;
+(id)localizedStringForStatusCode:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)statusCode;
-(NSDictionary *)allHeaderFields;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)_initWithCFURLResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4 ;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_peerCertificateChain;
-(id)_clientCertificateChain;
-(id)_clientCertificateState;
-(void)_setPeerTrust:(SecTrustRef)arg1 ;
-(SecTrustRef)_peerTrust;
@end

