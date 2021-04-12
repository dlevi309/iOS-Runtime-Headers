/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol BLTBulletinDistributorSubscriberDeviceDelegate;
@class BLTBulletinDistributorSubscriberList, NSXPCListener, NSString;

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate> {

	BLTBulletinDistributorSubscriberList* _subscribers;
	NSXPCListener* _listener;
	id<BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;

}

@property (nonatomic,retain) NSXPCListener * listener;                                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;              //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (nonatomic,retain) BLTBulletinDistributorSubscriberList * subscribers;                             //@synthesize subscribers=_subscribers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(BLTBulletinDistributorSubscriberList *)subscribers;
-(void)setDeviceDelegate:(id<BLTBulletinDistributorSubscriberDeviceDelegate>)arg1 ;
-(id<BLTBulletinDistributorSubscriberDeviceDelegate>)deviceDelegate;
-(void)_loadPingSubscriberBundles:(id)arg1 ;
-(id)initWithDeviceDelegate:(id)arg1 ;
-(void)setSubscribers:(BLTBulletinDistributorSubscriberList *)arg1 ;
@end

