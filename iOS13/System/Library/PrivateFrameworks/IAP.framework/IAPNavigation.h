/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
*/


@protocol IAPNavigationDelegate, OS_xpc_object, OS_dispatch_queue;
#import <IAP/IAP-Structs.h>
@class NSNotificationCenter, NSSet, NSObject;

@interface IAPNavigation : NSObject {

	CFNotificationCenterRef _darwinNotificationCenter;
	NSNotificationCenter* _localNotificationCenter;
	BOOL _connected;
	id<IAPNavigationDelegate> _delegate;
	NSSet* _availableAccessories;
	NSObject*<OS_xpc_object> _iap2d_connection;
	NSObject*<OS_dispatch_queue> _processingQ;

}

@property (retain) NSObject*<OS_xpc_object> iap2d_connection;              //@synthesize iap2d_connection=_iap2d_connection - In the implementation block
@property (assign) BOOL connected;                                         //@synthesize connected=_connected - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQ;               //@synthesize processingQ=_processingQ - In the implementation block
@property (__weak) id<IAPNavigationDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSSet * availableAccessories;                           //@synthesize availableAccessories=_availableAccessories - In the implementation block
-(id)init;
-(void)dealloc;
-(id<IAPNavigationDelegate>)delegate;
-(void)setDelegate:(id<IAPNavigationDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3 ;
-(void)_iap2d_server_did_launch;
-(void)_iap2d_server_did_die;
-(void)_getConnectedAccessories;
-(void)_updateInternalStateWithArrayOfAccessories:(id)arg1 ;
-(id)_convert_xpc_array_to_NSArray:(id)arg1 ;
-(void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3 ;
-(NSSet *)availableAccessories;
-(void)setAvailableAccessories:(NSSet *)arg1 ;
-(NSObject*<OS_xpc_object>)iap2d_connection;
-(void)setIap2d_connection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQ;
-(void)setProcessingQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

