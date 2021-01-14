/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long authenticationMode; 
@required
-(void)setAuthenticationMode:(long long)arg1;
-(AKDevice *)companionDevice;
-(void)_setProxiedAppName:(id)arg1;
-(void)setAppProvidedData:(id)arg1;
-(void)setProxiedDevice:(id)arg1;
-(NSString *)appProvidedContext;
-(void)setAppProvidedContext:(id)arg1;
-(NSDictionary *)appProvidedData;
-(void)setCompanionDevice:(id)arg1;
-(void)setServiceType:(long long)arg1;
-(NSString *)altDSID;
-(AKDevice *)proxiedDevice;
-(long long)authenticationMode;
-(NSString *)_proxiedAppName;
-(void)setAltDSID:(id)arg1;
-(long long)serviceType;

@end

