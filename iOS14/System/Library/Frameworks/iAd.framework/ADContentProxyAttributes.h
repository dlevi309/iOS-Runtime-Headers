/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@class NSURL, NSString;

@interface ADContentProxyAttributes : NSObject {

	NSURL* _contentProxyURL;
	NSURL* _contentProxyURLConnect;
	long long _proxyType;
	NSString* _configVersion;

}

@property (nonatomic,copy) NSURL * contentProxyURL;                     //@synthesize contentProxyURL=_contentProxyURL - In the implementation block
@property (nonatomic,copy) NSURL * contentProxyURLConnect;              //@synthesize contentProxyURLConnect=_contentProxyURLConnect - In the implementation block
@property (nonatomic,copy) NSString * configVersion;                    //@synthesize configVersion=_configVersion - In the implementation block
@property (assign,nonatomic) long long proxyType;                       //@synthesize proxyType=_proxyType - In the implementation block
+(id)sharedInstance;
-(void)contentProxyURLDidChange:(id)arg1 ;
-(void)configVersionDidChange:(id)arg1 ;
-(NSURL *)contentProxyURL;
-(NSString *)configVersion;
-(long long)proxyType;
-(void)proxyTypeDidChange:(long long)arg1 ;
-(void)contentProxyURLConnectDidChange:(id)arg1 ;
-(NSURL *)contentProxyURLConnect;
-(void)setContentProxyURLConnect:(NSURL *)arg1 ;
-(void)setContentProxyURL:(NSURL *)arg1 ;
-(void)setProxyType:(long long)arg1 ;
-(void)setConfigVersion:(NSString *)arg1 ;
@end

