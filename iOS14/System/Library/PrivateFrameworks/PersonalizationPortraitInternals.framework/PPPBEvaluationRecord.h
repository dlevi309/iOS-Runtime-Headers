/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying> {

	long long _deviceId;
	NSString* _contents;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSString * contents;              //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (assign,nonatomic) long long deviceId;               //@synthesize deviceId=_deviceId - In the implementation block
-(NSString *)contents;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setDeviceId:(long long)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceId;
-(BOOL)hasContents;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDeviceId:(BOOL)arg1 ;
@end

