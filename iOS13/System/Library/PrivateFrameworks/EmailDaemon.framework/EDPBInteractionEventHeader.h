/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPETMessageFrameTypeIntrospectable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {

	long long _deviceId;
	long long _userId;
	NSString* _locale;
	int _timezoneOffset;
	unsigned _userSegment;
	unsigned _version;
	SCD_Struct_ED7 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasUserId; 
@property (assign,nonatomic) long long userId;                    //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (assign,nonatomic) long long deviceId;                  //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL hasTimezoneOffset; 
@property (assign,nonatomic) int timezoneOffset;                  //@synthesize timezoneOffset=_timezoneOffset - In the implementation block
@property (assign,nonatomic) BOOL hasUserSegment; 
@property (assign,nonatomic) unsigned userSegment;                //@synthesize userSegment=_userSegment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasLocale;
-(long long)deviceId;
-(int)timezoneOffset;
-(void)setTimezoneOffset:(int)arg1 ;
-(void)setDeviceId:(long long)arg1 ;
-(long long)userId;
-(void)setUserId:(long long)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasDeviceId;
-(int)messageFrameType;
-(void)setHasUserId:(BOOL)arg1 ;
-(void)setHasDeviceId:(BOOL)arg1 ;
-(void)setHasTimezoneOffset:(BOOL)arg1 ;
-(BOOL)hasTimezoneOffset;
-(void)setUserSegment:(unsigned)arg1 ;
-(void)setHasUserSegment:(BOOL)arg1 ;
-(BOOL)hasUserSegment;
-(unsigned)userSegment;
@end

