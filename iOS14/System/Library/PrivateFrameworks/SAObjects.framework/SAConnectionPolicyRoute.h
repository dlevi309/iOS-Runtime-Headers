/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * cname; 
@property (nonatomic,copy) NSString * connectionId; 
@property (nonatomic,copy) NSString * host; 
@property (nonatomic,copy) NSNumber * mptcp; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * resolver; 
@property (nonatomic,copy) NSString * resolverProtocol; 
@property (nonatomic,copy) NSString * routeId; 
@property (nonatomic,copy) NSNumber * timeout; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionPolicyRoute;
+(id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)resolver;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)host;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)cname;
-(NSNumber *)mptcp;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSString *)routeId;
-(NSNumber *)timeout;
-(void)setType:(NSString *)arg1 ;
-(NSString *)connectionId;
-(void)setCname:(NSString *)arg1 ;
-(void)setMptcp:(NSNumber *)arg1 ;
-(void)setConnectionId:(NSString *)arg1 ;
-(NSString *)resolverProtocol;
-(void)setResolverProtocol:(NSString *)arg1 ;
-(NSString *)type;
-(void)setResolver:(NSString *)arg1 ;
-(void)setRouteId:(NSString *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
@end

