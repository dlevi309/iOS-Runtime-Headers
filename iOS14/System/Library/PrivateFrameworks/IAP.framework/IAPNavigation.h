/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(id)init;
-(id<IAPNavigationDelegate>)delegate;
-(void)_iap2d_server_did_die;
-(void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)processingQ;
-(void)_updateInternalStateWithArrayOfAccessories:(id)arg1 ;
-(void)setDelegate:(id<IAPNavigationDelegate>)arg1 ;
-(void)setIap2d_connection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_iap2d_server_did_launch;
-(NSObject*<OS_xpc_object>)iap2d_connection;
-(void)setAvailableAccessories:(NSSet *)arg1 ;
-(void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3 ;
-(void)_getConnectedAccessories;
-(NSSet *)availableAccessories;
-(id)_convert_xpc_array_to_NSArray:(id)arg1 ;
-(void)setProcessingQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

