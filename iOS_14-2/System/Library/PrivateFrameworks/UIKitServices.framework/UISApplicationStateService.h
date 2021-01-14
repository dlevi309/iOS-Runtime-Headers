/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <UIKit/UISApplicationStateXPCServerInterface.h>

@protocol UISApplicationStateServiceDelegate;
@class BSServiceConnectionListener, FBSSerialQueue, NSString;

@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface> {

	BSServiceConnectionListener* _listener;
	FBSSerialQueue* _calloutQueue;
	id<UISApplicationStateServiceDelegate> _delegate;
	struct {
		unsigned delegateDataSourceForApplicationBundleIdentifier : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UISApplicationStateServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)setBadgeValue:(id)arg1 ;
-(oneway void)setUsesBackgroundNetwork:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)usesBackgroundNetworkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)nextWakeIntervalSinceReferenceDateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)badgeValueWithCompletion:(/*^block*/id)arg1 ;
-(id)_operatingBundleIdentifier;
-(id<UISApplicationStateServiceDelegate>)delegate;
-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 ;
-(oneway void)setMinimumBackgroundFetchInterval:(id)arg1 ;
-(void)setDelegate:(id<UISApplicationStateServiceDelegate>)arg1 ;
-(oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1 ;
-(id)_dataSourceForApplicationBundleIdentifier:(id)arg1 ;
-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 legacyEntitlement:(id)arg3 ;
@end

