/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AFMediaRemoteDeviceInfo : NSObject {

	BOOL _lastFetchSucceeded;
	NSString* _routeIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL lastFetchSucceeded;                               //@synthesize lastFetchSucceeded=_lastFetchSucceeded - In the implementation block
@property (nonatomic,copy) NSString * routeIdentifier;                              //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
+(id)currentDevice;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)routeIdentifier;
-(void)setRouteIdentifier:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activeDeviceInfoChanged:(id)arg1 ;
-(void)_updateRouteIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)getRouteIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)lastFetchSucceeded;
-(void)setLastFetchSucceeded:(BOOL)arg1 ;
@end

