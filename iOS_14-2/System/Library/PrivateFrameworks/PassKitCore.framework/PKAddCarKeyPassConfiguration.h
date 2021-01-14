/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration {

	NSString* _password;
	NSString* _appIdentifier;

}

@property (nonatomic,copy) NSString * appIdentifier;              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * password;                   //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

