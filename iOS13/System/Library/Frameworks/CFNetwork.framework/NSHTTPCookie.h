/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieInternal, NSDictionary, NSString, NSDate, NSURL, NSArray;

@interface NSHTTPCookie : NSObject {

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
+(id)cookieWithProperties:(id)arg1 ;
+(id)requestHeaderFieldsWithCookies:(id)arg1 ;
+(id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)cookieWithCFHTTPCookie:(id)arg1 ;
+(id)_cf2nsCookies:(CFArrayRef)arg1 ;
+(const CFArrayRef)_ns2cfCookies:(id)arg1 ;
+(id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(BOOL)arg3 ;
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)domain;
-(id)_key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(NSString *)path;
-(unsigned long long)version;
-(NSDictionary *)properties;
-(id)initWithProperties:(id)arg1 ;
-(HTTPCookie*)_inner;
-(id)_initWithInternal:(id)arg1 ;
-(id)_initWithProperties:(id)arg1 fromString:(BOOL)arg2 ;
-(id)_initWithCookie:(id)arg1 partition:(id)arg2 ;
-(id)_initWithHeader:(const CompactCookieHeaderRef)arg1 ;
-(id)_initWithReference:(const CompactCookieArrayRef)arg1 index:(long long)arg2 ;
-(id)ensureCookieValid;
-(id)initWithCFHTTPCookie:(id)arg1 ;
-(id)_GetInternalCFHTTPCookie;
-(id)_CFHTTPCookie;
-(BOOL)isSessionOnly;
-(BOOL)isSecure;
-(BOOL)isHTTPOnly;
-(NSDate *)expiresDate;
-(NSString *)comment;
-(NSURL *)commentURL;
-(NSArray *)portList;
-(id)_storagePartition;
-(NSString *)sameSitePolicy;
-(id)Name;
-(id)Value;
-(id)Domain;
-(id)Path;
-(id)Expires;
-(id)Comment;
-(id)CommentURL;
-(id)StoragePartition;
-(id)SameSitePolicy;
-(id)OriginURL;
-(id)Version;
-(id)Secure;
-(id)Discard;
-(id)Port;
-(id)MaxAge;
-(long long)_compareForHeaderOrder:(id)arg1 ;
-(BOOL)_isExpired;
@end

