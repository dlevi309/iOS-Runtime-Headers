/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSString;

@interface WLWiFiNetwork : NSObject {

	WiFiNetworkRef _ref;

}

@property (assign,nonatomic) WiFiNetworkRef ref;              //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(void)dealloc;
-(NSString *)ssid;
-(WiFiNetworkRef)ref;
-(void)setRef:(WiFiNetworkRef)arg1 ;
-(id)initWithWiFiNetworkRef:(WiFiNetworkRef)arg1 ;
@end

