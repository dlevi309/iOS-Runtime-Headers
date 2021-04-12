/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAuthorizations:(id)arg1 ;
-(unsigned long long)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(void)setObjectUUID:(NSData *)arg1 ;
-(BOOL)hasObjectUUID;
-(NSData *)objectUUID;
@end

