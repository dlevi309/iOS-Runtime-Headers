/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ABCPbSummarySignatureRequest : PBRequest <NSCopying> {

	double _caseClosedTime;
	double _caseStartTime;
	NSMutableArray* _attachments;
	NSString* _build;
	NSString* _buildVariant;
	NSString* _caseClosureType;
	NSString* _caseContext;
	NSString* _caseDampeningType;
	NSString* _caseEffectiveProcess;
	NSString* _caseGroupIdentifier;
	NSString* _caseIdentifier;
	NSString* _caseRelatedProcesses;
	NSString* _caseThresholdValues;
	NSString* _domain;
	unsigned _logSizeTotal;
	NSString* _process;
	NSString* _subtype;
	NSString* _subtypeContext;
	NSString* _type;
	BOOL _remoteTrigger;
	SCD_Struct_AB7 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                            //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtype; 
@property (nonatomic,retain) NSString * subtype;                           //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtypeContext; 
@property (nonatomic,retain) NSString * subtypeContext;                    //@synthesize subtypeContext=_subtypeContext - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseIdentifier; 
@property (nonatomic,retain) NSString * caseIdentifier;                    //@synthesize caseIdentifier=_caseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                           //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                             //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                      //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseGroupIdentifier; 
@property (nonatomic,retain) NSString * caseGroupIdentifier;               //@synthesize caseGroupIdentifier=_caseGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLogSizeTotal; 
@property (assign,nonatomic) unsigned logSizeTotal;                        //@synthesize logSizeTotal=_logSizeTotal - In the implementation block
@property (assign,nonatomic) BOOL hasCaseClosedTime; 
@property (assign,nonatomic) double caseClosedTime;                        //@synthesize caseClosedTime=_caseClosedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseClosureType; 
@property (nonatomic,retain) NSString * caseClosureType;                   //@synthesize caseClosureType=_caseClosureType - In the implementation block
@property (assign,nonatomic) BOOL hasCaseStartTime; 
@property (assign,nonatomic) double caseStartTime;                         //@synthesize caseStartTime=_caseStartTime - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseContext; 
@property (nonatomic,retain) NSString * caseContext;                       //@synthesize caseContext=_caseContext - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseDampeningType; 
@property (nonatomic,retain) NSString * caseDampeningType;                 //@synthesize caseDampeningType=_caseDampeningType - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseEffectiveProcess; 
@property (nonatomic,retain) NSString * caseEffectiveProcess;              //@synthesize caseEffectiveProcess=_caseEffectiveProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseRelatedProcesses; 
@property (nonatomic,retain) NSString * caseRelatedProcesses;              //@synthesize caseRelatedProcesses=_caseRelatedProcesses - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseThresholdValues; 
@property (nonatomic,retain) NSString * caseThresholdValues;               //@synthesize caseThresholdValues=_caseThresholdValues - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteTrigger; 
@property (assign,nonatomic) BOOL remoteTrigger;                           //@synthesize remoteTrigger=_remoteTrigger - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachments;                 //@synthesize attachments=_attachments - In the implementation block
+(Class)attachmentsType;
-(NSString *)process;
-(NSString *)subtype;
-(void)setProcess:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(NSString *)build;
-(NSMutableArray *)attachments;
-(void)setBuild:(NSString *)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(BOOL)hasBuild;
-(id)description;
-(BOOL)hasDomain;
-(BOOL)hasSubtype;
-(NSString *)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(NSString *)subtypeContext;
-(void)copyTo:(id)arg1 ;
-(void)setSubtype:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(void)clearAttachments;
-(void)addAttachments:(id)arg1 ;
-(id)attachmentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attachmentsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)buildVariant;
-(void)setCaseIdentifier:(NSString *)arg1 ;
-(BOOL)hasCaseIdentifier;
-(NSString *)caseIdentifier;
-(BOOL)hasSubtypeContext;
-(void)setBuildVariant:(NSString *)arg1 ;
-(void)setCaseGroupIdentifier:(NSString *)arg1 ;
-(void)setCaseClosureType:(NSString *)arg1 ;
-(void)setCaseContext:(NSString *)arg1 ;
-(void)setCaseDampeningType:(NSString *)arg1 ;
-(void)setCaseEffectiveProcess:(NSString *)arg1 ;
-(void)setCaseRelatedProcesses:(NSString *)arg1 ;
-(void)setCaseThresholdValues:(NSString *)arg1 ;
-(BOOL)hasBuildVariant;
-(BOOL)hasCaseGroupIdentifier;
-(void)setLogSizeTotal:(unsigned)arg1 ;
-(void)setHasLogSizeTotal:(BOOL)arg1 ;
-(BOOL)hasLogSizeTotal;
-(void)setCaseClosedTime:(double)arg1 ;
-(void)setHasCaseClosedTime:(BOOL)arg1 ;
-(BOOL)hasCaseClosedTime;
-(BOOL)hasCaseClosureType;
-(void)setCaseStartTime:(double)arg1 ;
-(void)setHasCaseStartTime:(BOOL)arg1 ;
-(BOOL)hasCaseStartTime;
-(BOOL)hasCaseContext;
-(BOOL)hasCaseDampeningType;
-(BOOL)hasCaseEffectiveProcess;
-(BOOL)hasCaseRelatedProcesses;
-(BOOL)hasCaseThresholdValues;
-(void)setRemoteTrigger:(BOOL)arg1 ;
-(void)setHasRemoteTrigger:(BOOL)arg1 ;
-(BOOL)hasRemoteTrigger;
-(NSString *)caseGroupIdentifier;
-(unsigned)logSizeTotal;
-(double)caseClosedTime;
-(NSString *)caseClosureType;
-(double)caseStartTime;
-(NSString *)caseContext;
-(NSString *)caseDampeningType;
-(NSString *)caseEffectiveProcess;
-(NSString *)caseRelatedProcesses;
-(NSString *)caseThresholdValues;
-(BOOL)remoteTrigger;
@end

