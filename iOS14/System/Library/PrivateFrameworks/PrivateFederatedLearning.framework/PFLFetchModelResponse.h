/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCodeRecordTransport, NSString;

@interface PFLFetchModelResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	CKCodeRecordTransport* _modelAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasModelAsset; 
@property (nonatomic,retain) CKCodeRecordTransport * modelAsset;              //@synthesize modelAsset=_modelAsset - In the implementation block
-(id)dictionaryRepresentation;
-(id)extractRecordTransports;
-(void)substituteRecordTransports:(id)arg1 ;
-(CKCodeRecordTransport *)modelAsset;
-(void)setModelAsset:(CKCodeRecordTransport *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasModelAsset;
@end

