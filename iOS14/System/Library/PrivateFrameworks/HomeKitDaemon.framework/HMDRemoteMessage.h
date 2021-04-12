/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessage.h>

@class NSUUID, HMDHomeKitVersion, NSString;

@interface HMDRemoteMessage : HMFMessage {

	double _remoteTimeout;
	long long _type;
	NSUUID* _transactionIdentifier;
	HMDHomeKitVersion* _sourceVersion;

}

@property (nonatomic,retain) HMDHomeKitVersion * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSUUID * transactionIdentifier;                   //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure; 
@property (assign,nonatomic) unsigned long long restriction; 
@property (nonatomic,copy) NSString * attributedMessageName; 
@property (nonatomic,readonly) double timeout;                               //@synthesize remoteTimeout=_remoteTimeout - In the implementation block
+(id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
+(id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4 ;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(id)debugDescription;
-(HMDHomeKitVersion *)sourceVersion;
-(double)timeout;
-(BOOL)isRemote;
-(void)setType:(long long)arg1 ;
-(void)setSourceVersion:(HMDHomeKitVersion *)arg1 ;
-(id)description;
-(void)setTransactionIdentifier:(NSUUID *)arg1 ;
-(void)setResponseHandler:(/*^block*/id)arg1 ;
-(long long)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(NSUUID *)transactionIdentifier;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 ;
-(NSString *)attributedMessageName;
-(unsigned long long)restriction;
-(void)setRestriction:(unsigned long long)arg1 ;
-(void)setInternalResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(BOOL)arg7 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(BOOL)arg6 restriction:(unsigned long long)arg7 ;
-(void)setAttributedMessageName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(BOOL)arg7 restriction:(unsigned long long)arg8 ;
@end
