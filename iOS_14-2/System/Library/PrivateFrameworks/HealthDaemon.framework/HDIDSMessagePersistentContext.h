/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSString* _deviceIdentifier;
	NSDictionary* _userInfo;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned short)messageID;
-(void)setFromRequest:(BOOL)arg1 ;
-(BOOL)isFromRequest;
@end

