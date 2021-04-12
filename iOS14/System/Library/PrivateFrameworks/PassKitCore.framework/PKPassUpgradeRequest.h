/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)fields;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(PKOSVersionRequirement *)minimumOSVersion;
-(NSArray *)paymentApplicationIdentifiers;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
@end

