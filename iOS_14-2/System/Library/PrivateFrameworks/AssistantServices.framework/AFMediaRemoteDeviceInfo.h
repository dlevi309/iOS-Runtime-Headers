/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AFMediaRemoteDeviceInfo : NSObject {

	NSString* _groupIdentifier;
	BOOL _lastFetchSucceeded;
	NSString* _routeIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL lastFetchSucceeded;                               //@synthesize lastFetchSucceeded=_lastFetchSucceeded - In the implementation block
@property (nonatomic,copy) NSString * routeIdentifier;                              //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
+(id)currentDevice;
-(void)setLastFetchSucceeded:(BOOL)arg1 ;
-(void)getRouteIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)routeIdentifier;
-(void)getGroupIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)setRouteIdentifier:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)lastFetchSucceeded;
-(void)_updateDeviceInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_activeDeviceInfoChanged:(id)arg1 ;
@end

