/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding> {

	unsigned long long _priority;
	long long _cardType;
	long long _supportedProtocols;

}

@property (nonatomic,readonly) unsigned long long priority;               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long cardType;                        //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) long long supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)supportedProtocols;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)cardType;
-(id)initWithPaymentOptionDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)priority;
@end

