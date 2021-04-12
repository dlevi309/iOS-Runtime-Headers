/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(id)groupIdentifier;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSNumber *)timeout;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSString *)resolver;
-(NSString *)routeId;
-(void)setRouteId:(NSString *)arg1 ;
-(NSString *)connectionId;
-(id)encodedClassName;
-(void)setResolver:(NSString *)arg1 ;
-(NSString *)cname;
-(void)setCname:(NSString *)arg1 ;
-(void)setConnectionId:(NSString *)arg1 ;
-(NSNumber *)mptcp;
-(void)setMptcp:(NSNumber *)arg1 ;
-(NSString *)resolverProtocol;
-(void)setResolverProtocol:(NSString *)arg1 ;
@end

