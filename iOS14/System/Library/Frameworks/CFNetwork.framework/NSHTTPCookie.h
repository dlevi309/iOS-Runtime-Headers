/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSHTTPCookieInternal, NSDictionary, NSString, NSDate, NSURL, NSArray;

@interface NSHTTPCookie : NSObject <NSCoding> {

	NSHTTPCookieInternal* _cookiePrivate;

}

@property (readonly) HTTPCookie* _inner; 
@property (copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long version; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * value; 
@property (copy,readonly) NSDate * expiresDate; 
@property (getter=isSessionOnly,readonly) BOOL sessionOnly; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * path; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=isHTTPOnly,readonly) BOOL HTTPOnly; 
@property (copy,readonly) NSString * comment; 
@property (copy,readonly) NSURL * commentURL; 
@property (copy,readonly) NSArray * portList; 
@property (copy,readonly) NSString * sameSitePolicy; 
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3 ;
+(id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)cookieWithProperties:(id)arg1 ;
+(id)_cf2nsCookies:(CFArrayRef)arg1 ;
+(id)requestHeaderFieldsWithCookies:(id)arg1 ;
+(const CFArrayRef)_ns2cfCookies:(id)arg1 ;
+(id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_key;
-(BOOL)isSecure;
-(id)Name;
-(id)Path;
-(id)Port;
-(id)initWithProperties:(id)arg1 ;
-(id)Value;
-(id)Domain;
-(id)Secure;
-(id)MaxAge;
-(id)Expires;
-(id)Comment;
-(id)Version;
-(id)Discard;
-(NSString *)comment;
-(NSArray *)portList;
-(id)OriginURL;
-(NSDate *)expiresDate;
-(BOOL)isHTTPOnly;
-(NSDictionary *)properties;
-(NSURL *)commentURL;
-(id)CommentURL;
-(BOOL)_isExpired;
-(id)init;
-(NSString *)sameSitePolicy;
-(const OpaqueCFHTTPCookieRef)_CFHTTPCookie;
-(BOOL)isSessionOnly;
-(id)_storagePartition;
-(id)initWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(id)_initWithInternal:(id)arg1 ;
-(id)SameSitePolicy;
-(id)StoragePartition;
-(const OpaqueCFHTTPCookieRef)_GetInternalCFHTTPCookie;
-(id)_initWithHeader:(const CompactCookieHeaderRef)arg1 ;
-(id)_initWithProperties:(id)arg1 fromString:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_compareForHeaderOrder:(id)arg1 ;
-(NSString *)path;
-(id)_initWithCookie:(id)arg1 partition:(id)arg2 ;
-(id)_initWithReference:(const CompactCookieArrayRef)arg1 index:(long long)arg2 ;
-(NSString *)domain;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HTTPCookie*)_inner;
-(unsigned long long)version;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

