/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BKSMousePointerDeviceObserver.h>

@protocol BSInvalidatable;
@class PSPointerClientController, BKSMousePointerService, NSString;

@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver> {

	PSPointerClientController* _pointerClientController;
	BKSMousePointerService* _mousePointerService;
	id<BSInvalidatable> _mousePointerDeviceObserverToken;
	unsigned long long _connectedPointingDevicesCount;
	id<BSInvalidatable> _serviceKeepAliveAssertion;
	unsigned _systemCursorInteractionContextID;

}

@property (assign,nonatomic) unsigned systemCursorInteractionContextID;              //@synthesize systemCursorInteractionContextID=_systemCursorInteractionContextID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mousePointerDevicesDidChange:(id)arg1 ;
-(id)init;
-(void)setSystemCursorInteractionContextID:(unsigned)arg1 ;
-(void)_handleAssistiveTouchEnabledDidChangeNotification;
-(void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)arg1 ;
-(unsigned)systemCursorInteractionContextID;
-(void)_updateKeepAliveAssertion;
-(void)dealloc;
@end

