/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSNumber* _primaryJSBLSequenceCounter;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,copy) NSNumber * primaryJSBLSequenceCounter;              //@synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                   //@synthesize devSigned=_devSigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(BOOL)devSigned;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)setPrimaryJSBLSequenceCounter:(NSNumber *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end

