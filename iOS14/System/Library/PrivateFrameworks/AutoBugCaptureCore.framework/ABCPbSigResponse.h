/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSigResponse : PBCodable <NSCopying> {

	unsigned _caseCount;
	unsigned _caseCountTarget;
	NSString* _caseIdentifier;
	NSString* _caseStatus;
	BOOL _decision;
	SCD_Struct_AB1 _has;

}

@property (nonatomic,readonly) BOOL hasCaseIdentifier; 
@property (nonatomic,retain) NSString * caseIdentifier;              //@synthesize caseIdentifier=_caseIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCaseCount; 
@property (assign,nonatomic) unsigned caseCount;                     //@synthesize caseCount=_caseCount - In the implementation block
@property (assign,nonatomic) BOOL hasCaseCountTarget; 
@property (assign,nonatomic) unsigned caseCountTarget;               //@synthesize caseCountTarget=_caseCountTarget - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseStatus; 
@property (nonatomic,retain) NSString * caseStatus;                  //@synthesize caseStatus=_caseStatus - In the implementation block
@property (assign,nonatomic) BOOL hasDecision; 
@property (assign,nonatomic) BOOL decision;                          //@synthesize decision=_decision - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)decision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCaseIdentifier:(NSString *)arg1 ;
-(void)setCaseStatus:(NSString *)arg1 ;
-(BOOL)hasCaseIdentifier;
-(void)setCaseCount:(unsigned)arg1 ;
-(void)setHasCaseCount:(BOOL)arg1 ;
-(BOOL)hasCaseCount;
-(void)setCaseCountTarget:(unsigned)arg1 ;
-(void)setHasCaseCountTarget:(BOOL)arg1 ;
-(BOOL)hasCaseCountTarget;
-(BOOL)hasCaseStatus;
-(void)setDecision:(BOOL)arg1 ;
-(void)setHasDecision:(BOOL)arg1 ;
-(BOOL)hasDecision;
-(NSString *)caseIdentifier;
-(unsigned)caseCount;
-(unsigned)caseCountTarget;
-(NSString *)caseStatus;
@end

