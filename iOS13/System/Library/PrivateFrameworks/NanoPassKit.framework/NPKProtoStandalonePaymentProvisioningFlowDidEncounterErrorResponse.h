/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPKProtoStandaloneError *)error;
-(void)setError:(NPKProtoStandaloneError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
@end

