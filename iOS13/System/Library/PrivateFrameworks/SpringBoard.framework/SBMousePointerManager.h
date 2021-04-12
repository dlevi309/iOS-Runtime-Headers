/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)mousePointerDevicesDidChange:(id)arg1 ;
-(void)setSystemCursorInteractionContextID:(unsigned)arg1 ;
-(unsigned)systemCursorInteractionContextID;
-(void)_setPointerUIDWithConnectedDeviceCount:(unsigned long long)arg1 ;
-(void)_updateKeepAliveAssertion;
-(void)_handleAssistiveTouchEnabledDidChangeNotification;
@end

