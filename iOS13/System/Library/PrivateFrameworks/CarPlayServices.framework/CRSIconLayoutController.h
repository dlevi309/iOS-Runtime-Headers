/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <libobjc.A.dylib/CRSIconLayoutServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSString;

@interface CRSIconLayoutController : NSObject <CRSIconLayoutServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) BSServiceConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BSServiceConnection *)connection;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchIconStateForVehicleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetIconStateForVehicleID:(id)arg1 ;
-(void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)exportIconStateForCertificateSerial:(id)arg1 categories:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIconOrder:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3 ;
@end

