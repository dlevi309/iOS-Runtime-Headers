/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {

	long long _commandSerialNumber;
	long long _dSID;
	NSString* _deviceID;
	BOOL _activeCommandsOnly;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;              //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasDSID; 
@property (assign,nonatomic) long long dSID;                             //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasActiveCommandsOnly; 
@property (assign,nonatomic) BOOL activeCommandsOnly;                    //@synthesize activeCommandsOnly=_activeCommandsOnly - In the implementation block
-(void)setDeviceID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceID;
-(long long)dSID;
-(void)setHasActiveCommandsOnly:(BOOL)arg1 ;
-(BOOL)hasActiveCommandsOnly;
-(BOOL)activeCommandsOnly;
-(long long)commandSerialNumber;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDSID;
-(void)setHasDSID:(BOOL)arg1 ;
-(BOOL)hasDeviceID;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(BOOL)arg1 ;
-(BOOL)hasCommandSerialNumber;
-(void)setDSID:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActiveCommandsOnly:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

