/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {

	NSString* _significantEvent;
	BOOL _offsetPresent;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) BOOL hasSignificantEvent; 
@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign,nonatomic) BOOL hasOffsetPresent; 
@property (assign,nonatomic) BOOL offsetPresent;                       //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(BOOL)hasSignificantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(void)setHasOffsetPresent:(BOOL)arg1 ;
-(BOOL)hasOffsetPresent;
-(BOOL)offsetPresent;
@end

