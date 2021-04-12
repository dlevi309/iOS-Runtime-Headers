/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding> {

	NSString* _deviceAccountIdentifier;
	NSString* _lastUsedBarcodeIdentifier;

}

@property (nonatomic,copy) NSString * deviceAccountIdentifier;                //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastUsedBarcodeIdentifier;              //@synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(id)initWithBarcodeIdentifier:(id)arg1 deviceAccountIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)lastUsedBarcodeIdentifier;
-(void)setLastUsedBarcodeIdentifier:(NSString *)arg1 ;
@end

