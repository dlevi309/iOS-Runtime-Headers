/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {

	NSString* _significantEvent;
	BOOL _offsetPresent;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasSignificantEvent; 
@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign,nonatomic) BOOL hasOffsetPresent; 
@property (assign,nonatomic) BOOL offsetPresent;                       //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)significantEvent;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSignificantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(void)setHasOffsetPresent:(BOOL)arg1 ;
-(BOOL)hasOffsetPresent;
-(BOOL)offsetPresent;
@end

