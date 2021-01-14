/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableContributor : PBCodable <NSCopying> {

	double _modificationDate;
	NSString* _appleID;
	NSString* _callerID;
	NSData* _uuid;
	BOOL _deleted;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                          //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;               //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleID; 
@property (nonatomic,retain) NSString * appleID;                    //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) BOOL hasCallerID; 
@property (nonatomic,retain) NSString * callerID;                   //@synthesize callerID=_callerID - In the implementation block
-(double)modificationDate;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(NSString *)callerID;
-(BOOL)hasUuid;
-(BOOL)deleted;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setModificationDate:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(NSString *)appleID;
-(void)setCallerID:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(BOOL)hasModificationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDeleted;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(BOOL)hasAppleID;
-(BOOL)hasCallerID;
@end

