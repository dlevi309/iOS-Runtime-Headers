/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowDidEncounterErrorResponse : PBCodable <NSCopying> {

	NPKProtoStandaloneError* _error;
	NPKProtoStandaloneResponseHeader* _responseHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneResponseHeader * responseHeader;              //@synthesize responseHeader=_responseHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) NPKProtoStandaloneError * error;                                //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(NPKProtoStandaloneError *)arg1 ;
-(NPKProtoStandaloneError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
@end

