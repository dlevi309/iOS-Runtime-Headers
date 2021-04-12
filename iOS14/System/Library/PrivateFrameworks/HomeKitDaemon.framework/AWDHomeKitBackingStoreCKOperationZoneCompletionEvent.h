/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitBackingStoreCKOperationZoneCompletionEvent : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	int _containerType;
	NSString* _errorDomain;
	int _zoneType;
	BOOL _didSucceed;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidSucceed; 
@property (assign,nonatomic) BOOL didSucceed;                           //@synthesize didSucceed=_didSucceed - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                       //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                         //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) BOOL hasZoneType; 
@property (assign,nonatomic) int zoneType;                              //@synthesize zoneType=_zoneType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setContainerType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)hasContainerType;
-(int)containerType;
-(BOOL)didSucceed;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDidSucceed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(int)zoneType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setHasDidSucceed:(BOOL)arg1 ;
-(BOOL)hasDidSucceed;
-(void)setZoneType:(int)arg1 ;
-(void)setHasZoneType:(BOOL)arg1 ;
-(BOOL)hasZoneType;
-(id)zoneTypeAsString:(int)arg1 ;
-(int)StringAsZoneType:(id)arg1 ;
@end

