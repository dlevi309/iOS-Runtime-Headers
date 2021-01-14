/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding> {

	NSData* _attestation;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,retain) NSData * signature;                //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)signature;
-(NSData *)attestation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setAttestation:(NSData *)arg1 ;
-(id)initWithAttestation:(id)arg1 signature:(id)arg2 ;
@end

