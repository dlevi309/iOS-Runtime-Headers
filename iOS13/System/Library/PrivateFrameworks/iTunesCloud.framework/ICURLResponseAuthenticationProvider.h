/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding> {

	long long _interactionLevel;

}

@property (nonatomic,readonly) long long interactionLevel;              //@synthesize interactionLevel=_interactionLevel - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultProvider;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUserInteractionLevel:(long long)arg1 ;
-(long long)interactionLevel;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

