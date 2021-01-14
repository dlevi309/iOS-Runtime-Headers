/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate, NSSet;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	BOOL _sendAcked;
	BOOL _processAcked;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSDictionary* _userInfo;
	NSDictionary* _idsOptions;
	NSDate* _date;
	NSSet* _targetDeviceIDs;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * idsOptions;                          //@synthesize idsOptions=_idsOptions - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
@property (assign,nonatomic) BOOL sendAcked;                                     //@synthesize sendAcked=_sendAcked - In the implementation block
@property (assign,nonatomic) BOOL processAcked;                                  //@synthesize processAcked=_processAcked - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs;                              //@synthesize targetDeviceIDs=_targetDeviceIDs - In the implementation block
+(BOOL)supportsSecureCoding;
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
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)idsOptions;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSSet *)targetDeviceIDs;
-(void)setSendAcked:(BOOL)arg1 ;
-(BOOL)isFromRequest;
-(BOOL)processAcked;
-(void)setProcessAcked:(BOOL)arg1 ;
-(BOOL)sendAcked;
@end

