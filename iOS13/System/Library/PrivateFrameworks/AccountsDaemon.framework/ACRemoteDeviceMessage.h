/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSMutableDictionary, NSData, NSString, ACAccount, NSDictionary, NSError;

@interface ACRemoteDeviceMessage : NSObject {

	NSMutableDictionary* _payload;
	NSData* _data;
	BOOL _needsReply;
	BOOL _isReply;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * command; 
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSString * sentMessageIdentifier; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> result; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                 //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                    //@synthesize isReply=_isReply - In the implementation block
+(id)_whitelistedClasses;
+(id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3 ;
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(id)init;
-(id)description;
-(NSDictionary *)options;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(NSError *)error;
-(NSObject*<NSSecureCoding>)result;
-(ACAccount *)account;
-(BOOL)success;
-(NSString *)command;
-(BOOL)isReply;
-(void)setIsReply:(BOOL)arg1 ;
-(void)setNeedsReply:(BOOL)arg1 ;
-(BOOL)needsReply;
-(void)_invalidateCachedData;
-(NSString *)sentMessageIdentifier;
-(void)_setPayloadObject:(id)arg1 forKey:(id)arg2 ;
-(id)_payloadObjectForKey:(id)arg1 ;
@end

