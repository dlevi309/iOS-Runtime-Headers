/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NPKProtoStandalonePaymentProvisioningFlowStepContext *)context;
-(void)setContext:(NPKProtoStandalonePaymentProvisioningFlowStepContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasContext;
-(void)setResponseHeader:(NPKProtoStandaloneResponseHeader *)arg1 ;
-(id)fromStepAsString:(int)arg1 ;
-(int)StringAsFromStep:(id)arg1 ;
-(id)toStepAsString:(int)arg1 ;
-(int)StringAsToStep:(id)arg1 ;
-(NPKProtoStandaloneResponseHeader *)responseHeader;
-(int)fromStep;
-(void)setFromStep:(int)arg1 ;
-(int)toStep;
-(void)setToStep:(int)arg1 ;
@end

