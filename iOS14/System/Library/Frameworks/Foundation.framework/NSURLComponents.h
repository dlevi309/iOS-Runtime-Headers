/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSArray;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * string; 
@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
@property (readonly) NSRange rangeOfScheme; 
@property (readonly) NSRange rangeOfUser; 
@property (readonly) NSRange rangeOfPassword; 
@property (readonly) NSRange rangeOfHost; 
@property (readonly) NSRange rangeOfPort; 
@property (readonly) NSRange rangeOfPath; 
@property (readonly) NSRange rangeOfQuery; 
@property (readonly) NSRange rangeOfFragment; 
@property (copy) NSArray * queryItems; 
@property (copy) NSArray * percentEncodedQueryItems; 
+(id)componentsWithString:(id)arg1 ;
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(NSString *)query;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSNumber *)port;
-(NSString *)scheme;
-(NSString *)host;
-(id)initWithString:(id)arg1 ;
-(NSString *)percentEncodedPath;
-(NSArray *)queryItems;
-(NSRange)rangeOfPassword;
-(id)init;
-(void)setUser:(NSString *)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSString *)percentEncodedHost;
-(NSString *)fragment;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(NSRange)rangeOfUser;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(NSString *)password;
-(void)setFragment:(NSString *)arg1 ;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(NSString *)percentEncodedQuery;
-(NSString *)percentEncodedUser;
-(NSString *)user;
-(NSRange)rangeOfFragment;
-(NSURL *)URL;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(NSString *)percentEncodedFragment;
-(NSString *)string;
-(void)setPercentEncodedQueryItems:(NSArray *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)percentEncodedPassword;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(NSRange)rangeOfQuery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeOfScheme;
-(NSArray *)percentEncodedQueryItems;
@end

