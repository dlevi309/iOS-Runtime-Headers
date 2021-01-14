/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying> {

	NSString* _build;
	NSString* _issueCategory;
	NSString* _issueDescription;
	NSMutableArray* _outcomes;
	NSString* _teamId;

}

@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) BOOL hasTeamId; 
@property (nonatomic,retain) NSString * teamId;                        //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueCategory; 
@property (nonatomic,retain) NSString * issueCategory;                 //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDescription; 
@property (nonatomic,retain) NSString * issueDescription;              //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * outcomes;                //@synthesize outcomes=_outcomes - In the implementation block
+(Class)outcomesType;
-(id)dictionaryRepresentation;
-(NSString *)build;
-(NSString *)teamId;
-(BOOL)hasIssueDescription;
-(void)setBuild:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBuild;
-(id)description;
-(NSString *)issueDescription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOutcomes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outcomes;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)issueCategory;
-(void)setTeamId:(NSString *)arg1 ;
-(BOOL)hasTeamId;
-(void)setIssueCategory:(NSString *)arg1 ;
-(BOOL)hasIssueCategory;
-(void)addOutcomes:(id)arg1 ;
-(unsigned long long)outcomesCount;
-(void)clearOutcomes;
-(id)outcomesAtIndex:(unsigned long long)arg1 ;
@end

