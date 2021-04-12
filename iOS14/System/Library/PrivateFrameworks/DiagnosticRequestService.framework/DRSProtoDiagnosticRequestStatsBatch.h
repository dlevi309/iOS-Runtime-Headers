/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	DRSProtoClientDeviceMetadata* _clientMetadata;
	NSMutableArray* _requestsResultsStats;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestsResultsStats;                      //@synthesize requestsResultsStats=_requestsResultsStats - In the implementation block
+(Class)requestsResultsStatsType;
-(id)dictionaryRepresentation;
-(BOOL)hasClientMetadata;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1 ;
-(unsigned long long)hash;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRequestsResultsStats:(id)arg1 ;
-(unsigned long long)requestsResultsStatsCount;
-(void)clearRequestsResultsStats;
-(id)requestsResultsStatsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)requestsResultsStats;
-(void)setRequestsResultsStats:(NSMutableArray *)arg1 ;
@end

