/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
@end

