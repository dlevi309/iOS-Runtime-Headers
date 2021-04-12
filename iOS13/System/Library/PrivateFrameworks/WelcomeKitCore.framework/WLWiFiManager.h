/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLWiFiManager : NSObject {

	WiFiManagerClientRef _ref;

}

@property (assign,nonatomic) WiFiManagerClientRef ref;                 //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) BOOL isTetheringSupported; 
-(id)init;
-(void)dealloc;
-(void)disable;
-(void)enable;
-(WiFiManagerClientRef)ref;
-(void)setRef:(WiFiManagerClientRef)arg1 ;
-(id)createDeviceClient;
-(BOOL)isTetheringSupported;
@end

