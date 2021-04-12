/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
*/


#import <CarrierSettings/CarrierSettings-Structs.h>
@class NSMutableArray, NSArray;

@interface PHNetworkFetcher : NSObject {

	unsigned long long _state;
	CTServerConnectionRef _server;
	NSMutableArray* _mutableNetworks;
	/*^block*/id _networkNotificationHandler;

}

@property (assign) CTServerConnectionRef server;                    //@synthesize server=_server - In the implementation block
@property (retain) NSMutableArray * mutableNetworks;                //@synthesize mutableNetworks=_mutableNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (copy) id networkNotificationHandler;                     //@synthesize networkNotificationHandler=_networkNotificationHandler - In the implementation block
@property (readonly) NSArray * networks; 
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setServer:(CTServerConnectionRef)arg1 ;
-(CTServerConnectionRef)server;
-(NSArray *)networks;
-(NSMutableArray *)mutableNetworks;
-(void)setMutableNetworks:(NSMutableArray *)arg1 ;
-(void)updateNetworkSelectionStatus;
-(void)fetchNetworkList;
-(void)selectNetwork:(id)arg1 ;
-(id)networkNotificationHandler;
-(void)setNetworkNotificationHandler:(id)arg1 ;
@end

