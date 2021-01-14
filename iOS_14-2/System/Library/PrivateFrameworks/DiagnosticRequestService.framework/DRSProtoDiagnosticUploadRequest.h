/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, DRSProtoRequestDescription;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying> {

	NSString* _issueDescription;
	NSMutableArray* _logs;
	DRSProtoRequestDescription* _requestDescription;

}

@property (nonatomic,readonly) BOOL hasRequestDescription; 
@property (nonatomic,retain) DRSProtoRequestDescription * requestDescription;              //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDescription; 
@property (nonatomic,retain) NSString * issueDescription;                                  //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * logs;                                        //@synthesize logs=_logs - In the implementation block
+(Class)logsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)logs;
-(BOOL)hasIssueDescription;
-(void)mergeFrom:(id)arg1 ;
-(DRSProtoRequestDescription *)requestDescription;
-(id)description;
-(NSString *)issueDescription;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLogs:(NSMutableArray *)arg1 ;
-(void)setIssueDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLogs:(id)arg1 ;
-(void)setRequestDescription:(DRSProtoRequestDescription *)arg1 ;
-(unsigned long long)logsCount;
-(void)clearLogs;
-(id)logsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRequestDescription;
@end

