/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSURLRequestInternal, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (readonly) URLRequest* _inner; 
@property (getter=isKnownHTTP3Capable,readonly) BOOL knownHTTP3Capable; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
@property (readonly) BOOL allowsExpensiveNetworkAccess; 
@property (readonly) BOOL allowsConstrainedNetworkAccess; 
+(BOOL)supportsSecureCoding;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(id)requestWithURL:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
-(const CFURLRef)cfURL;
-(BOOL)_ignoreHSTS;
-(NSString *)HTTPMethod;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(BOOL)_isIdempotent;
-(id)contentDispositionEncodingFallbackArray;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(id)init;
-(NSInputStream *)HTTPBodyStream;
-(id)initWithURL:(id)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(double)_payloadTransmissionTimeout;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(NSURL *)mainDocumentURL;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(id)_startTimeoutDate;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(id)_propertyForKey:(id)arg1 ;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
-(id)HTTPReferrer;
-(id)_initWithInternal:(id)arg1 ;
-(void)_removePropertyForKey:(id)arg1 ;
-(CFURLRequestRef)_CFURLRequest;
-(id)HTTPUserAgent;
-(BOOL)allowsConstrainedNetworkAccess;
-(BOOL)allowsExpensiveNetworkAccess;
-(id)HTTPContentType;
-(NSDictionary *)allHTTPHeaderFields;
-(unsigned long long)networkServiceType;
-(BOOL)_requiresShortConnectionTimeout;
-(BOOL)HTTPShouldHandleCookies;
-(id)HTTPExtraCookies;
-(unsigned long long)expectedWorkload;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKnownHTTP3Capable;
-(BOOL)_preventHSTSStorage;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(double)timeoutInterval;
-(id)description;
-(id)boundInterfaceIdentifier;
-(double)_timeWindowDelay;
-(unsigned long long)cachePolicy;
-(BOOL)allowsCellularAccess;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)HTTPBody;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(URLRequest*)_inner;
-(double)_timeWindowDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

