/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(CKDPUserAlias *)alias;
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

