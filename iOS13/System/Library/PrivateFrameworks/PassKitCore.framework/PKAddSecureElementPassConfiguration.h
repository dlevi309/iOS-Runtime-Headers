/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding> {

	NSString* _issuerIdentifier;
	NSString* _localizedDescription;
	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                  //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)issuerIdentifier;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(long long)configurationType;
@end

