/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ASAuthorizationProvider>)provider;
-(id)initWithProvider:(id)arg1 ;
@end

