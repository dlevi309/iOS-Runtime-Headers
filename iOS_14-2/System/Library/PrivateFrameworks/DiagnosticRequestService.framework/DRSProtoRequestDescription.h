/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface DRSProtoRequestDescription : PBCodable <NSCopying> {

	unsigned long long _requestTime;
	NSString* _build;
	NSData* _contextDictionaryData;
	NSString* _issueCategory;
	NSString* _teamId;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasTeamId; 
@property (nonatomic,retain) NSString * teamId;                            //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueCategory; 
@property (nonatomic,retain) NSString * issueCategory;                     //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasContextDictionaryData; 
@property (nonatomic,retain) NSData * contextDictionaryData;               //@synthesize contextDictionaryData=_contextDictionaryData - In the implementation block
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) unsigned long long requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                             //@synthesize build=_build - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)build;
-(NSString *)teamId;
-(void)setBuild:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBuild;
-(id)description;
-(unsigned long long)requestTime;
-(unsigned long long)hash;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestTime:(unsigned long long)arg1 ;
-(BOOL)hasRequestTime;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)issueCategory;
-(void)setTeamId:(NSString *)arg1 ;
-(BOOL)hasTeamId;
-(void)setIssueCategory:(NSString *)arg1 ;
-(NSData *)contextDictionaryData;
-(void)setContextDictionaryData:(NSData *)arg1 ;
-(BOOL)hasIssueCategory;
-(BOOL)hasContextDictionaryData;
@end

