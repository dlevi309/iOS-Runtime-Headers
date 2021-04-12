/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
@property (readonly) BOOL allowsExpensiveNetworkAccess; 
@property (readonly) BOOL allowsConstrainedNetworkAccess; 
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)requestWithURL:(id)arg1 ;
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(BOOL)ak_usesHTTPSScheme;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(NSURL *)URL;
-(id)_CFURLRequest;
-(id)_initWithCFURLRequest:(id)arg1 ;
-(URLRequest*)_inner;
-(NSDictionary *)allHTTPHeaderFields;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSData *)HTTPBody;
-(NSInputStream *)HTTPBodyStream;
-(id)_initWithInternal:(id)arg1 ;
-(id)_allHTTPHeaderFieldsAsArrays;
-(double)_payloadTransmissionTimeout;
-(id)_startTimeoutDate;
-(NSURL *)mainDocumentURL;
-(NSString *)HTTPMethod;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(const CFURLRef)cfURL;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(void)_removePropertyForKey:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_propertyForKey:(id)arg1 ;
-(BOOL)HTTPShouldHandleCookies;
-(BOOL)allowsCellularAccess;
-(unsigned long long)networkServiceType;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(BOOL)allowsConstrainedNetworkAccess;
-(BOOL)allowsExpensiveNetworkAccess;
-(id)boundInterfaceIdentifier;
-(BOOL)_ignoreHSTS;
-(BOOL)_preventHSTSStorage;
-(BOOL)_requiresShortConnectionTimeout;
-(id)_bodyParts;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(BOOL)HTTPShouldUsePipelining;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(BOOL)_isIdempotent;
@end

