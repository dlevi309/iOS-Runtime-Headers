/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSArray, NSString;


@protocol WFDetailsProviderContext <WFProviderContext>
@property (nonatomic,readonly) NSArray * recommendations; 
@property (assign) BOOL diagnosable; 
@property (assign,nonatomic) BOOL autoJoinEnabled; 
@property (assign,nonatomic) BOOL autoLoginEnabled; 
@property (assign,nonatomic) BOOL isInSaveDataMode; 
@property (getter=isCurrent,nonatomic,readonly) BOOL current; 
@property (getter=isKnownNetwork,nonatomic,readonly) BOOL knownNetwork; 
@property (getter=isRandomMACAddressDisabled,nonatomic,readonly) BOOL randomMACAddressDisabled; 
@property (getter=isRandomMACAddressConfigurable,nonatomic,readonly) BOOL randomMACAddressConfigurable; 
@property (getter=isRandomMACFeatureEnabled,nonatomic,readonly) BOOL randomMACFeatureEnabled; 
@property (getter=isConnectedWithHardwareAddress,nonatomic,readonly) BOOL connectedWithHardwareAddress; 
@property (getter=isRandomMACSwitchOn,nonatomic,readonly) BOOL randomMACSwitchOn; 
@property (nonatomic,copy,readonly) NSString * randomMACAddress; 
@property (nonatomic,copy,readonly) NSString * hardwareMACAddress; 
@property (nonatomic,copy) NSString * staticPrivateMACFooterText; 
@property (nonatomic,copy) NSString * turnONPrivateMACFooterText; 
@property (nonatomic,copy) NSString * turnOFFPrivateMACFooterText; 
@required
-(void)join;
-(void)manage;
-(void)forget;
-(void)renewLease;
-(NSArray *)recommendations;
-(NSString *)hardwareMACAddress;
-(BOOL)isCurrent;
-(NSString *)randomMACAddress;
-(void)setAutoJoinEnabled:(BOOL)arg1;
-(void)setAutoLoginEnabled:(BOOL)arg1;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1;
-(void)setDiagnosable:(BOOL)arg1;
-(void)setStaticPrivateMACFooterText:(id)arg1;
-(void)setTurnONPrivateMACFooterText:(id)arg1;
-(void)setTurnOFFPrivateMACFooterText:(id)arg1;
-(BOOL)isRandomMACFeatureEnabled;
-(BOOL)isRandomMACAddressDisabled;
-(BOOL)isRandomMACSwitchOn;
-(BOOL)isConnectedWithHardwareAddress;
-(BOOL)isKnownNetwork;
-(void)openRecommendationLink;
-(void)enableRandomMAC;
-(void)disableRandomMAC;
-(id)diagnosticsContext;
-(BOOL)diagnosable;
-(BOOL)autoJoinEnabled;
-(BOOL)autoLoginEnabled;
-(BOOL)isRandomMACAddressConfigurable;
-(NSString *)staticPrivateMACFooterText;
-(NSString *)turnONPrivateMACFooterText;
-(NSString *)turnOFFPrivateMACFooterText;

@end

