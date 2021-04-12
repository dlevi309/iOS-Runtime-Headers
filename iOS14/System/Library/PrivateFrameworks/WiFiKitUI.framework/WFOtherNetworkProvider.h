/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

@class NSString;


@protocol WFOtherNetworkProvider <WFCredentialsProvider>
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) long long securityMode; 
@property (assign,nonatomic) BOOL joining; 
@property (assign,nonatomic) NSString * activityString; 
@property (nonatomic,readonly) id WAPIIdentity; 
@property (nonatomic,readonly) id WAPIRootCertificate; 
@optional
-(BOOL)joining;
-(long long)securityMode;
-(NSString *)activityString;
-(void)setActivityString:(id)arg1;
-(void)setJoining:(BOOL)arg1;
-(id)WAPIRootCertificate;
-(id)WAPIIdentity;

@required
-(NSString *)SSID;

@end

