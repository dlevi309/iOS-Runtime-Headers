/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLWiFiManager : NSObject {

	WiFiManagerClientRef _ref;

}

@property (assign,nonatomic) WiFiManagerClientRef ref;                 //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) BOOL isTetheringSupported; 
-(void)disable;
-(void)enable;
-(WiFiManagerClientRef)ref;
-(id)init;
-(void)setRef:(WiFiManagerClientRef)arg1 ;
-(void)dealloc;
-(id)createDeviceClient;
-(BOOL)isTetheringSupported;
@end

