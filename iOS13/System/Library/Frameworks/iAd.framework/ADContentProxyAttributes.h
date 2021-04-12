/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProxyType:(long long)arg1 ;
-(long long)proxyType;
-(void)setConfigVersion:(NSString *)arg1 ;
-(NSString *)configVersion;
-(NSURL *)contentProxyURLConnect;
-(void)contentProxyURLDidChange:(id)arg1 ;
-(void)contentProxyURLConnectDidChange:(id)arg1 ;
-(void)proxyTypeDidChange:(long long)arg1 ;
-(void)configVersionDidChange:(id)arg1 ;
-(void)setContentProxyURL:(NSURL *)arg1 ;
-(void)setContentProxyURLConnect:(NSURL *)arg1 ;
-(NSURL *)contentProxyURL;
@end

