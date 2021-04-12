/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4 ;
-(id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4 ;
-(id)_peerCertificateChain;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)statusCode;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)allHeaderFields;
-(void)dealloc;
@end

