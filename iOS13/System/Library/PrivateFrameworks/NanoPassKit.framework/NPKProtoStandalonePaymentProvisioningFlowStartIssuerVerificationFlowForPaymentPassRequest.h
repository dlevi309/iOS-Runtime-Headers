/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(BOOL)hasSerialNumber;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(BOOL)hasPassTypeIdentifier;
@end

