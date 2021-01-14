/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)networks;
-(id)init;
-(void)setServer:(CTServerConnectionRef)arg1 ;
-(CTServerConnectionRef)server;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)dealloc;
-(NSMutableArray *)mutableNetworks;
-(void)setMutableNetworks:(NSMutableArray *)arg1 ;
-(void)updateNetworkSelectionStatus;
-(void)fetchNetworkList;
-(void)selectNetwork:(id)arg1 ;
-(id)networkNotificationHandler;
-(void)setNetworkNotificationHandler:(id)arg1 ;
@end

