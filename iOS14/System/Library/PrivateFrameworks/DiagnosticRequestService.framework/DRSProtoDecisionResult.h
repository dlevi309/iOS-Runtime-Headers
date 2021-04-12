/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoDecisionResult : PBCodable <NSCopying> {

	NSString* _rejectionReason;
	BOOL _accepted;
	SCD_Struct_DR1 _has;

}

@property (assign,nonatomic) BOOL hasAccepted; 
@property (assign,nonatomic) BOOL accepted;                           //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,readonly) BOOL hasRejectionReason; 
@property (nonatomic,retain) NSString * rejectionReason;              //@synthesize rejectionReason=_rejectionReason - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setAccepted:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)accepted;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAccepted:(BOOL)arg1 ;
-(BOOL)hasAccepted;
-(void)setRejectionReason:(NSString *)arg1 ;
-(BOOL)hasRejectionReason;
-(NSString *)rejectionReason;
@end

