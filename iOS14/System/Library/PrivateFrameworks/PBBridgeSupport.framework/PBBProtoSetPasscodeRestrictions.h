/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {

	NSData* _restrictions;
	BOOL _wristDetectionDisabled;
	SCD_Struct_PB2 _has;

}

@property (nonatomic,retain) NSData * restrictions;                       //@synthesize restrictions=_restrictions - In the implementation block
@property (assign,nonatomic) BOOL hasWristDetectionDisabled; 
@property (assign,nonatomic) BOOL wristDetectionDisabled;                 //@synthesize wristDetectionDisabled=_wristDetectionDisabled - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)restrictions;
-(void)setRestrictions:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWristDetectionDisabled:(BOOL)arg1 ;
-(void)setHasWristDetectionDisabled:(BOOL)arg1 ;
-(BOOL)hasWristDetectionDisabled;
-(BOOL)wristDetectionDisabled;
@end

