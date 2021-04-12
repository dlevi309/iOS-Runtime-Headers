/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRCDeviceQueryDelegate.h>
#import <TVRemoteUI/TVRUIDeviceQuery.h>

@protocol TVRUIDeviceSearchDelegate;
@class TVRCDeviceQuery, NSMutableDictionary, NSString;

@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery> {

	BOOL _nearbyDeviceAdded;
	id<TVRUIDeviceSearchDelegate> _delegate;
	TVRCDeviceQuery* _query;
	NSMutableDictionary* _deviceList;

}

@property (assign,nonatomic,__weak) id<TVRUIDeviceSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRCDeviceQuery * query;                                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceList;                           //@synthesize deviceList=_deviceList - In the implementation block
@property (assign,nonatomic) BOOL nearbyDeviceAdded;                                     //@synthesize nearbyDeviceAdded=_nearbyDeviceAdded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVRUIDeviceSearchDelegate>)delegate;
-(void)setDelegate:(id<TVRUIDeviceSearchDelegate>)arg1 ;
-(TVRCDeviceQuery *)query;
-(void)stop;
-(void)setQuery:(TVRCDeviceQuery *)arg1 ;
-(BOOL)hasStarted;
-(void)startQuery:(id)arg1 ;
-(NSMutableDictionary *)deviceList;
-(void)setDeviceList:(NSMutableDictionary *)arg1 ;
-(void)deviceQueryDidUpdateDevices:(id)arg1 ;
-(BOOL)nearbyDeviceAdded;
-(void)setNearbyDeviceAdded:(BOOL)arg1 ;
@end

