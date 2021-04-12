/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFMessage.h>

@class NSUUID, NSString, HMFMessageDestination, HMFMessageTransport, HMFActivity, NSDictionary, HMFLogEventSession;

@interface HMFMutableMessage : HMFMessage

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long qualityOfService; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (assign,nonatomic,__weak) HMFMessageTransport * transport; 
@property (nonatomic,retain) HMFActivity * activity; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,retain) HMFLogEventSession * logEventSession; 
@property (nonatomic,copy) id responseHandler; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
@end

