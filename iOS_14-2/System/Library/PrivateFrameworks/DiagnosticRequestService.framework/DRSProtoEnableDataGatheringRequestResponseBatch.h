/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface DRSProtoEnableDataGatheringRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	NSMutableArray* _decisionResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * decisionResults;              //@synthesize decisionResults=_decisionResults - In the implementation block
+(Class)decisionResultsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)decisionResults;
-(void)addDecisionResults:(id)arg1 ;
-(unsigned long long)decisionResultsCount;
-(void)clearDecisionResults;
-(id)decisionResultsAtIndex:(unsigned long long)arg1 ;
-(void)setDecisionResults:(NSMutableArray *)arg1 ;
@end

