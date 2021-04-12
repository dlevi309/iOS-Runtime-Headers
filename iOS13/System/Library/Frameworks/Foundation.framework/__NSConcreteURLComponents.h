/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	CFURLComponentsRef _components;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(id)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)user;
-(id)scheme;
-(id)host;
-(id)port;
-(id)password;
-(id)query;
-(id)fragment;
-(id)initWithString:(id)arg1 ;
-(id)path;
-(void)setPort:(id)arg1 ;
-(CFURLComponentsRef)__cfComponents;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(id)URL;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setScheme:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(id)percentEncodedUser;
-(void)setPercentEncodedUser:(id)arg1 ;
-(id)percentEncodedPassword;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(id)percentEncodedHost;
-(void)setPercentEncodedHost:(id)arg1 ;
-(id)percentEncodedPath;
-(void)setPercentEncodedPath:(id)arg1 ;
-(id)percentEncodedQuery;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(id)percentEncodedFragment;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(NSRange)rangeOfFragment;
-(id)queryItems;
-(void)setQueryItems:(id)arg1 ;
-(id)percentEncodedQueryItems;
-(void)setPercentEncodedQueryItems:(id)arg1 ;
@end

