/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUserAlias, NSString, NSMutableArray;

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _oBSOLETEPcsServiceType;
	NSMutableArray* _sortedBys;
	BOOL _publicKeyRequested;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                          //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedBys;                     //@synthesize sortedBys=_sortedBys - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEPcsServiceType; 
@property (nonatomic,retain) NSString * oBSOLETEPcsServiceType;              //@synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyRequested; 
@property (assign,nonatomic) BOOL publicKeyRequested;                        //@synthesize publicKeyRequested=_publicKeyRequested - In the implementation block
+(id)options;
+(Class)sortedByType;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(CKDPUserAlias *)alias;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addSortedBy:(id)arg1 ;
-(unsigned long long)sortedBysCount;
-(void)clearSortedBys;
-(id)sortedByAtIndex:(unsigned long long)arg1 ;
-(void)setOBSOLETEPcsServiceType:(NSString *)arg1 ;
-(BOOL)hasAlias;
-(BOOL)hasOBSOLETEPcsServiceType;
-(BOOL)publicKeyRequested;
-(void)setPublicKeyRequested:(BOOL)arg1 ;
-(void)setHasPublicKeyRequested:(BOOL)arg1 ;
-(BOOL)hasPublicKeyRequested;
-(NSMutableArray *)sortedBys;
-(void)setSortedBys:(NSMutableArray *)arg1 ;
-(NSString *)oBSOLETEPcsServiceType;
@end

