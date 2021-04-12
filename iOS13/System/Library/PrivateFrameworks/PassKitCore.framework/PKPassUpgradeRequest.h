/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKOSVersionRequirement, NSString, NSArray, NSDictionary;

@interface PKPassUpgradeRequest : NSObject <NSSecureCoding> {

	unsigned long long _type;
	PKOSVersionRequirement* _minimumOSVersion;
	NSString* _secureElementIdentifier;
	NSArray* _paymentApplicationIdentifiers;
	NSDictionary* _fields;

}

@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirement * minimumOSVersion;              //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                         //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * paymentApplicationIdentifiers;                //@synthesize paymentApplicationIdentifiers=_paymentApplicationIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * fields;                                  //@synthesize fields=_fields - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passUpgradeRequestFromDictionary:(id)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)fields;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(id)asDictionary;
-(PKOSVersionRequirement *)minimumOSVersion;
-(NSArray *)paymentApplicationIdentifiers;
@end

