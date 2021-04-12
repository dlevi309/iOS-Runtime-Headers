/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying> {

	NSMutableArray* _authorizations;
	NSData* _objectUUID;

}

@property (nonatomic,readonly) BOOL hasObjectUUID; 
@property (nonatomic,retain) NSData * objectUUID;                          //@synthesize objectUUID=_objectUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizations;              //@synthesize authorizations=_authorizations - In the implementation block
+(Class)authorizationsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)objectUUID;
-(void)addAuthorizations:(id)arg1 ;
-(unsigned long long)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(void)setObjectUUID:(NSData *)arg1 ;
-(BOOL)hasObjectUUID;
@end

