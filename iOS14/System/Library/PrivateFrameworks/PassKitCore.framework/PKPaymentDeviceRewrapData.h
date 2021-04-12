/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding> {

	NSData* _platformData;
	NSData* _platformDataSignature;

}

@property (nonatomic,copy) NSData * platformData;                       //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy) NSData * platformDataSignature;              //@synthesize platformDataSignature=_platformDataSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)platformData;
-(void)setPlatformData:(NSData *)arg1 ;
-(NSData *)platformDataSignature;
-(void)setPlatformDataSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

