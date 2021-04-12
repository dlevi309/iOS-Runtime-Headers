/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/PCConnectionManagerDelegate.h>

@class PCConnectionManager, NSString;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _manager;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _keepAliveId;
	ImsKeepAliveDelegate* _delegate;
	BOOL _enableWakeUpOnWifi;
	BOOL _keepAliveStarted;
	WiFiManagerClientRef _wifiManagerRef;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)startKeepAlive;
-(id)initWithIdentifier:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 maxInterval:(double)arg2 enableWakeUp:(BOOL)arg3 delegate:(ImsKeepAliveDelegate*)arg4 ;
-(void)stopKeepAlive;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(void)startWakeUpOnWifi;
-(void)stopWakeUpOnWifi;
@end

