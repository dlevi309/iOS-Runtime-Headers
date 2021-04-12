/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASAuthorizationProvider;
@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding> {

	id<ASAuthorizationProvider> _provider;

}

@property (nonatomic,readonly) id<ASAuthorizationProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)initWithProvider:(id)arg1 ;
-(id)init;
-(id<ASAuthorizationProvider>)provider;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

