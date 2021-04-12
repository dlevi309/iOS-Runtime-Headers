/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)badgeCount;
-(void)setBadgeCount:(unsigned)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)setForDevice:(BOOL)arg1 ;
-(void)setHasForDevice:(BOOL)arg1 ;
-(BOOL)hasForDevice;
-(BOOL)forDevice;
@end

