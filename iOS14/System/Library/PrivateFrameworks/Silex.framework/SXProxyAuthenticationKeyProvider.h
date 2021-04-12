/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXProxyAuthenticationKeyProvider.h>

@protocol SXProxyAuthenticationKeyProvider <NSObject>
@required
-(void)requestAuthenticationKeyWithCompletion:(/*^block*/id)arg1;
-(void)requestAuthenticationKeyWithCompletion:(/*^block*/id)arg1;

@end


@class NSString;

@interface SXProxyAuthenticationKeyProvider : NSObject <SXProxyAuthenticationKeyProvider> {

	NSString* _identifier;
	NSString* _secret;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * secret;                  //@synthesize secret=_secret - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)secret;
-(NSString *)identifier;
-(void)requestAuthenticationKeyWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 secret:(id)arg2 ;
@end

