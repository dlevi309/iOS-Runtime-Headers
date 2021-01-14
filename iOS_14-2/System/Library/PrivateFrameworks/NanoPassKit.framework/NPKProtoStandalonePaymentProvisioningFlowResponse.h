/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentProvisioningFlowStepContext, NPKProtoStandaloneResponseHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentProvisioningFlowStepContext* _context;
	int _fromStep;
	NPKProtoStandaloneResponseHeader* _responseHeader;
	int _toStep;

}

@property (nonatomic,retain) NPKProtoStandaloneResponseHeader * responseHeader;                           //@synthesize responseHeader=_responseHeader - In the implementation block
@property (assign,nonatomic) int fromStep;                                                                //@synthesize fromStep=_fromStep - In the implementation block
@property (assign,nonatomic) int toStep;                                                                  //@synthesize toStep=_toStep - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) NPKProtoStandalonePaymentProvisioningFlowStepContext * context;              //@synthesize context=_context - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentProvisioningFlowStepContext *)context;
-(id)description;
-(int)toStep;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContext;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(NPKProtoStandalonePaymentProvisioningFlowStepContext *)arg1 ;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(id)fromStepAsString:(int)arg1 ;
-(int)StringAsFromStep:(id)arg1 ;
-(id)toStepAsString:(int)arg1 ;
-(int)StringAsToStep:(id)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
-(int)fromStep;
-(void)setFromStep:(int)arg1 ;
-(void)setToStep:(int)arg1 ;
@end

