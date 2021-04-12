/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _categoryRootInstalled;
	SCD_Struct_ED8 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasUserId; 
@property (assign,nonatomic) long long userId;                           //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (assign,nonatomic) long long deviceId;                         //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                          //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL hasTimezoneOffset; 
@property (assign,nonatomic) int timezoneOffset;                         //@synthesize timezoneOffset=_timezoneOffset - In the implementation block
@property (assign,nonatomic) BOOL hasUserSegment; 
@property (assign,nonatomic) unsigned userSegment;                       //@synthesize userSegment=_userSegment - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryRootInstalled; 
@property (assign,nonatomic) BOOL categoryRootInstalled;                 //@synthesize categoryRootInstalled=_categoryRootInstalled - In the implementation block
-(void)setUserId:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUserId;
-(void)setHasVersion:(BOOL)arg1 ;
-(long long)userId;
-(BOOL)hasVersion;
-(NSString *)locale;
-(BOOL)hasLocale;
-(void)setLocale:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)timezoneOffset;
-(void)setTimezoneOffset:(int)arg1 ;
-(id)description;
-(void)setDeviceId:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDeviceId:(BOOL)arg1 ;
-(int)messageFrameType;
-(void)setHasUserId:(BOOL)arg1 ;
-(void)setHasTimezoneOffset:(BOOL)arg1 ;
-(BOOL)hasTimezoneOffset;
-(void)setUserSegment:(unsigned)arg1 ;
-(void)setHasUserSegment:(BOOL)arg1 ;
-(BOOL)hasUserSegment;
-(void)setCategoryRootInstalled:(BOOL)arg1 ;
-(void)setHasCategoryRootInstalled:(BOOL)arg1 ;
-(BOOL)hasCategoryRootInstalled;
-(unsigned)userSegment;
-(BOOL)categoryRootInstalled;
@end

