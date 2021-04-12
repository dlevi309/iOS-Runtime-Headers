/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>

@protocol OS_dispatch_source;
@class NSArray, SSLookupRequest, CLLocationManager, NSObject, NSDictionary, SKUIClientContext, NSString;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {

	NSArray* _items;
	long long _status;
	BOOL _isMonitoring;
	SSLookupRequest* _lookupRequest;
	CLLocationManager* _locationManager;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _locationTimeoutTimer;
	long long _locationTimeoutCount;
	NSObject*<OS_dispatch_source> _refreshTimer;
	NSDictionary* _responseDictionary;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long status;                               //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(long long)status;
-(NSArray *)items;
-(void)disable;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(void)_startMonitoringLocation;
-(void)_disableNearMe;
-(void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(long long)arg4 ;
-(void)_lookupItemsForLocation:(id)arg1 ;
-(void)_stopRefreshTimer;
-(void)_monitorLocationTimeout;
-(void)_stopMonitoringLocation;
-(void)_startRefreshTimer;
-(void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_refreshTimeout;
-(void)getItems;
-(BOOL)isNearMeLocationStatusEnabled;
@end

