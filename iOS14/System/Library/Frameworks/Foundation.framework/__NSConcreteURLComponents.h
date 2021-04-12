/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	CFURLComponentsRef _components;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setPort:(id)arg1 ;
-(void)setScheme:(id)arg1 ;
-(id)query;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(id)port;
-(id)scheme;
-(id)host;
-(id)initWithString:(id)arg1 ;
-(id)percentEncodedPath;
-(id)queryItems;
-(NSRange)rangeOfPassword;
-(id)init;
-(void)setUser:(id)arg1 ;
-(void)setQueryItems:(id)arg1 ;
-(id)percentEncodedHost;
-(id)fragment;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(void)setPath:(id)arg1 ;
-(id)path;
-(void)setPercentEncodedPath:(id)arg1 ;
-(NSRange)rangeOfUser;
-(void)setPercentEncodedHost:(id)arg1 ;
-(id)password;
-(void)setFragment:(id)arg1 ;
-(id)URLRelativeToURL:(id)arg1 ;
-(id)description;
-(void)setPassword:(id)arg1 ;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(id)percentEncodedQuery;
-(id)percentEncodedUser;
-(id)user;
-(NSRange)rangeOfFragment;
-(id)URL;
-(unsigned long long)hash;
-(void)setPercentEncodedUser:(id)arg1 ;
-(id)percentEncodedFragment;
-(id)string;
-(void)setPercentEncodedQueryItems:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(id)percentEncodedPassword;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(NSRange)rangeOfQuery;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeOfScheme;
-(id)percentEncodedQueryItems;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

