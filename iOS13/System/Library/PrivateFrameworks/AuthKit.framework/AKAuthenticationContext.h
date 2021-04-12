/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

@class NSString, NSDictionary, AKDevice;


@protocol AKAuthenticationContext <NSObject>
@property (nonatomic,copy) NSString * altDSID; 
@property (assign,nonatomic) long long serviceType; 
@property (setter=_setProxiedAppName:,nonatomic,copy) NSString * _proxiedAppName; 
@property (nonatomic,copy) NSDictionary * appProvidedData; 
@property (nonatomic,copy) NSString * appProvidedContext; 
@property (nonatomic,copy) AKDevice * proxiedDevice; 
@property (nonatomic,copy) AKDevice * companionDevice; 
@required
-(NSString *)altDSID;
-(void)setAltDSID:(id)arg1;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1;
-(AKDevice *)companionDevice;
-(void)setCompanionDevice:(id)arg1;
-(AKDevice *)proxiedDevice;
-(NSString *)appProvidedContext;
-(void)setAppProvidedContext:(id)arg1;
-(void)setProxiedDevice:(id)arg1;
-(void)setAppProvidedData:(id)arg1;
-(NSDictionary *)appProvidedData;
-(NSString *)_proxiedAppName;
-(void)_setProxiedAppName:(id)arg1;

@end

