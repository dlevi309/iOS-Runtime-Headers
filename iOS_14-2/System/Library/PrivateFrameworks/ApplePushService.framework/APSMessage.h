/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSDictionary;

@interface APSMessage : NSObject <NSCoding> {

	NSMutableDictionary* _plist;
	NSMutableDictionary* _properties;
	void* _xpcMessage;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,retain) NSString * correlationIdentifier; 
@property (assign,nonatomic) unsigned long long sendRTT; 
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setInstanceObject:(id)arg1 forKey:(id)arg2 ;
-(id)instanceObjectForKey:(id)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(id)guid;
-(NSDictionary *)userInfo;
-(id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2 ;
-(NSString *)topic;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)sendRTT;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(id)initWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)setGuid:(id)arg1 ;
-(void)setSendRTT:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

