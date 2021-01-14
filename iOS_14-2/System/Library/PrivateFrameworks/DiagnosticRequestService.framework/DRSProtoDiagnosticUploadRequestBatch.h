/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/DRSDecisionServerBatchRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoDiagnosticUploadRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying> {

	DRSProtoClientDeviceMetadata* _clientMetadata;
	NSMutableArray* _uploadRequests;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * requests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadRequests;                            //@synthesize uploadRequests=_uploadRequests - In the implementation block
+(Class)uploadRequestsType;
-(id)dictionaryRepresentation;
-(BOOL)hasClientMetadata;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)requests;
-(NSString *)description;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1 ;
-(unsigned long long)hash;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUploadRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)uploadRequests;
-(void)addUploadRequests:(id)arg1 ;
-(unsigned long long)uploadRequestsCount;
-(void)clearUploadRequests;
-(id)uploadRequestsAtIndex:(unsigned long long)arg1 ;
@end

