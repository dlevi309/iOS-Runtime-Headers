/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(long long)arg1 ;
-(long long)configurationType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(BOOL)hasRequiredDataForProvisioning;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)issuerIdentifier;
@end

