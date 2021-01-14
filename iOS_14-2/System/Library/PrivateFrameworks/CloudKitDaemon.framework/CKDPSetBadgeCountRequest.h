/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {

	unsigned _badgeCount;
	BOOL _forDevice;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) unsigned badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL hasForDevice; 
@property (assign,nonatomic) BOOL forDevice;                   //@synthesize forDevice=_forDevice - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(unsigned)badgeCount;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)forDevice;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)setForDevice:(BOOL)arg1 ;
-(void)setHasForDevice:(BOOL)arg1 ;
-(BOOL)hasForDevice;
@end

