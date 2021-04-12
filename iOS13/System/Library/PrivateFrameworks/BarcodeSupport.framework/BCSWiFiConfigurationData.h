/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString;

@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate> {

	BOOL _WEP;
	BOOL _hidden;
	NSString* _ssid;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * ssid;                          //@synthesize ssid=_ssid - In the implementation block
@property (getter=isWEP,nonatomic,readonly) BOOL WEP;                         //@synthesize WEP=_WEP - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                   //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(BOOL)isHidden;
-(NSString *)ssid;
-(BOOL)isWEP;
-(NSString *)extraPreviewText;
-(id)initWithSSID:(id)arg1 isWEP:(BOOL)arg2 password:(id)arg3 isHidden:(BOOL)arg4 ;
@end

