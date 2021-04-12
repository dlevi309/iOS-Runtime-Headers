/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCallID:(unsigned)arg1 ;
-(unsigned)callID;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(unsigned)clientVersion;
-(void)setClientVersion:(unsigned)arg1 ;
-(id)stringForCheckpoint;
-(NSString *)frameworkVersion;
-(void)setFrameworkVersion:(NSString *)arg1 ;
@end

