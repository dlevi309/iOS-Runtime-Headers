/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCompanionUserNotificationConfiguration, NSString;

@interface HDCodableCompanionUserNotificationRequest : PBRequest <NSCopying> {

	HDCodableCompanionUserNotificationConfiguration* _notificationConfiguration;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                             //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationConfiguration; 
@property (nonatomic,retain) HDCodableCompanionUserNotificationConfiguration * notificationConfiguration;              //@synthesize notificationConfiguration=_notificationConfiguration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)hasRequestIdentifier;
-(void)setNotificationConfiguration:(HDCodableCompanionUserNotificationConfiguration *)arg1 ;
-(BOOL)hasNotificationConfiguration;
-(HDCodableCompanionUserNotificationConfiguration *)notificationConfiguration;
@end

