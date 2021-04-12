/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDSyncAnchorMap.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncStatus : PBCodable <HDSyncAnchorMap, HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {

	NSMutableArray* _anchors;
	int _statusCode;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * anchors;              //@synthesize anchors=_anchors - In the implementation block
+(id)statusWithStatusCode:(int)arg1 ;
+(Class)anchorsType;
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
-(id)dictionaryRepresentation;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(NSString *)description;
-(NSMutableArray *)anchors;
-(unsigned long long)hash;
-(void)setAnchors:(NSMutableArray *)arg1 ;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)nanoSyncDescription;
-(void)clearAnchors;
-(unsigned long long)anchorCount;
-(long long)anchorForSyncEntityIdentifier:(id)arg1 ;
-(void)enumerateAnchorsAndEntityIdentifiersWithBlock:(/*^block*/id)arg1 ;
-(void)addAnchors:(id)arg1 ;
-(unsigned long long)anchorsCount;
-(id)anchorsAtIndex:(unsigned long long)arg1 ;
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2 ;
-(long long)anchorForSyncEntityClass:(Class)arg1 ;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
@end

