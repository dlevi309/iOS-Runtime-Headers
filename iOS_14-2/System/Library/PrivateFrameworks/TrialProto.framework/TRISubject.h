/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRISubject : PBCodable <NSCopying> {

	NSString* _deviceId;

}

@property (nonatomic,readonly) BOOL hasDeviceId; 
@property (nonatomic,retain) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setDeviceId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceId;
-(BOOL)isEqual:(id)arg1 ;
@end

