/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSString;

@interface WLWiFiNetwork : NSObject {

	WiFiNetworkRef _ref;

}

@property (assign,nonatomic) WiFiNetworkRef ref;              //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(WiFiNetworkRef)ref;
-(NSString *)ssid;
-(void)setRef:(WiFiNetworkRef)arg1 ;
-(void)dealloc;
-(id)initWithWiFiNetworkRef:(WiFiNetworkRef)arg1 ;
@end

