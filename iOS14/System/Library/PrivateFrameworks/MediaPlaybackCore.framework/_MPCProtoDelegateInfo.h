/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoDelegateInfo : PBCodable <NSCopying> {

	unsigned long long _accountID;
	long long _delegateInfoID;
	NSString* _deviceGUID;
	NSString* _deviceName;
	NSString* _requestUserAgent;
	int _systemReleaseType;
	NSString* _timeZoneName;
	NSString* _uuid;
	BOOL _privateListeningEnabled;
	SCD_Struct_MP22 _has;

}

@property (assign,nonatomic) BOOL hasDelegateInfoID; 
@property (assign,nonatomic) long long delegateInfoID;                     //@synthesize delegateInfoID=_delegateInfoID - In the implementation block
@property (assign,nonatomic) BOOL hasAccountID; 
@property (assign,nonatomic) unsigned long long accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceGUID; 
@property (nonatomic,retain) NSString * deviceGUID;                        //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasSystemReleaseType; 
@property (assign,nonatomic) int systemReleaseType;                        //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestUserAgent; 
@property (nonatomic,retain) NSString * requestUserAgent;                  //@synthesize requestUserAgent=_requestUserAgent - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName;                      //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateListeningEnabled; 
@property (assign,nonatomic) BOOL privateListeningEnabled;                 //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
+(id)currentDeviceDelegateInfo;
-(unsigned long long)accountID;
-(id)dictionaryRepresentation;
-(void)setAccountID:(unsigned long long)arg1 ;
-(NSString *)deviceName;
-(void)setPrivateListeningEnabled:(BOOL)arg1 ;
-(NSString *)uuid;
-(void)setHasAccountID:(BOOL)arg1 ;
-(BOOL)hasAccountID;
-(BOOL)hasDeviceName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)deviceGUID;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(BOOL)hasDeviceGUID;
-(int)systemReleaseType;
-(void)setSystemReleaseType:(int)arg1 ;
-(void)setHasSystemReleaseType:(BOOL)arg1 ;
-(BOOL)hasSystemReleaseType;
-(void)setHasPrivateListeningEnabled:(BOOL)arg1 ;
-(BOOL)hasPrivateListeningEnabled;
-(unsigned long long)hash;
-(NSString *)timeZoneName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTimeZoneName;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)privateListeningEnabled;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDelegateInfoID:(long long)arg1 ;
-(NSString *)requestUserAgent;
-(void)setRequestUserAgent:(NSString *)arg1 ;
-(void)setHasDelegateInfoID:(BOOL)arg1 ;
-(BOOL)hasDelegateInfoID;
-(long long)delegateInfoID;
-(BOOL)hasRequestUserAgent;
-(void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

