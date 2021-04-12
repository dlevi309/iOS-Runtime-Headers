/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString, NSArray;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * disableMPTCP; 
@property (nonatomic,copy) NSNumber * enableOptimisticDNS; 
@property (nonatomic,copy) NSNumber * enableTLS13; 
@property (nonatomic,copy) NSNumber * enableTLS13ZeroRTT; 
@property (nonatomic,copy) NSNumber * enableTcpFastOpen; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSNumber * globalTimeout; 
@property (nonatomic,copy) NSNumber * mptcpFallbackPort; 
@property (nonatomic,copy) NSString * policyId; 
@property (nonatomic,copy) NSArray * routes; 
@property (nonatomic,copy) NSNumber * timeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicy;
+(id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)enabled;
-(NSArray *)routes;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTimeToLive:(NSNumber *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setRoutes:(NSArray *)arg1 ;
-(NSNumber *)timeToLive;
-(NSString *)policyId;
-(NSNumber *)disableMPTCP;
-(NSNumber *)enableTLS13;
-(void)setDisableMPTCP:(NSNumber *)arg1 ;
-(NSNumber *)enableOptimisticDNS;
-(void)setEnableOptimisticDNS:(NSNumber *)arg1 ;
-(void)setEnableTLS13:(NSNumber *)arg1 ;
-(NSNumber *)enableTLS13ZeroRTT;
-(void)setEnableTLS13ZeroRTT:(NSNumber *)arg1 ;
-(NSNumber *)enableTcpFastOpen;
-(void)setEnableTcpFastOpen:(NSNumber *)arg1 ;
-(NSNumber *)globalTimeout;
-(void)setGlobalTimeout:(NSNumber *)arg1 ;
-(NSNumber *)mptcpFallbackPort;
-(void)setMptcpFallbackPort:(NSNumber *)arg1 ;
-(void)setPolicyId:(NSString *)arg1 ;
@end

