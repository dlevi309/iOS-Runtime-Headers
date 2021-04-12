/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowStartIssuerVerificationFlowForPaymentPassRequest : PBRequest <NSCopying> {

	NSString* _passTypeIdentifier;
	NPKProtoStandaloneRequestHeader* _requestHeader;
	NSString* _serialNumber;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPassTypeIdentifier; 
@property (nonatomic,retain) NSString * passTypeIdentifier;                                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)serialNumber;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasSerialNumber;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(BOOL)hasPassTypeIdentifier;
@end

