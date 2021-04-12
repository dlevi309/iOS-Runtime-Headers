/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
+(id)componentsWithString:(id)arg1 ;
-(id)init;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)user;
-(NSString *)scheme;
-(NSString *)host;
-(NSNumber *)port;
-(NSString *)password;
-(NSString *)query;
-(NSString *)fragment;
-(id)initWithString:(id)arg1 ;
-(NSString *)path;
-(void)setPort:(NSNumber *)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(NSURL *)URL;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(NSString *)percentEncodedUser;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(NSString *)percentEncodedPassword;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
-(NSString *)percentEncodedHost;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(NSString *)percentEncodedPath;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(NSString *)percentEncodedQuery;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(NSString *)percentEncodedFragment;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(NSRange)rangeOfFragment;
-(NSArray *)queryItems;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSArray *)percentEncodedQueryItems;
-(void)setPercentEncodedQueryItems:(NSArray *)arg1 ;
@end

