/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, CKDPRecordFieldIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {

	NSMutableArray* _assets;
	NSData* _authPutRequest;
	int _authPutType;
	NSMutableArray* _contentRequestHeaders;
	CKDPRecordFieldIdentifier* _field;
	CKDPRecordType* _type;
	NSMutableArray* _uploads;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;                   //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                             //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploads;                            //@synthesize uploads=_uploads - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;              //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthPutRequest; 
@property (nonatomic,retain) NSData * authPutRequest;                             //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (assign,nonatomic) BOOL hasAuthPutType; 
@property (assign,nonatomic) int authPutType;                                     //@synthesize authPutType=_authPutType - In the implementation block
+(id)options;
+(Class)contentRequestHeadersType;
+(Class)assetsType;
+(Class)uploadsType;
-(unsigned long long)assetsCount;
-(NSMutableArray *)assets;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)field;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(CKDPRecordType *)arg1 ;
-(BOOL)hasField;
-(id)description;
-(void)addAssets:(id)arg1 ;
-(NSMutableArray *)uploads;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(CKDPRecordType *)type;
-(unsigned long long)hash;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAssets;
-(void)setUploads:(NSMutableArray *)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(void)setAuthPutType:(int)arg1 ;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
-(void)addUploads:(id)arg1 ;
-(unsigned long long)uploadsCount;
-(void)clearUploads;
-(id)uploadsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAuthPutRequest;
-(int)authPutType;
-(void)setHasAuthPutType:(BOOL)arg1 ;
-(BOOL)hasAuthPutType;
-(id)authPutTypeAsString:(int)arg1 ;
-(int)StringAsAuthPutType:(id)arg1 ;
@end

