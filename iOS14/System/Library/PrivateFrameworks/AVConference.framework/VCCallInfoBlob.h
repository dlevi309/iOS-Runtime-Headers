/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCCallInfoBlob : PBCodable <NSCopying> {

	unsigned _callID;
	unsigned _clientVersion;
	NSString* _deviceType;
	NSString* _frameworkVersion;
	NSString* _osVersion;

}

@property (assign,nonatomic) unsigned callID;                          //@synthesize callID=_callID - In the implementation block
@property (assign,nonatomic) unsigned clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceType;                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * frameworkVersion;              //@synthesize frameworkVersion=_frameworkVersion - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                     //@synthesize osVersion=_osVersion - In the implementation block
-(unsigned)callID;
-(id)dictionaryRepresentation;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceType;
-(void)setCallID:(unsigned)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(unsigned)clientVersion;
-(NSString *)osVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientVersion:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)frameworkVersion;
-(id)stringForCheckpoint;
-(void)setFrameworkVersion:(NSString *)arg1 ;
@end

