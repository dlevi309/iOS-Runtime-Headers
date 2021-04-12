/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSString;

@interface WFHotspotHelperNetwork : NSObject {

	NSString* _ssid;
	NSString* _password;
	NSString* _label;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * ssid;                          //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)ssid;
-(NSString *)password;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithSSID:(id)arg1 bundleIdentifier:(id)arg2 password:(id)arg3 label:(id)arg4 ;
@end

