/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding> {

	long long _interactionLevel;

}

@property (nonatomic,readonly) long long interactionLevel;              //@synthesize interactionLevel=_interactionLevel - In the implementation block
+(id)defaultProvider;
+(BOOL)supportsSecureCoding;
-(long long)interactionLevel;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUserInteractionLevel:(long long)arg1 ;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

