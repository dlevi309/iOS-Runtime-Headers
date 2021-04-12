/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ADPersonalizedAds_XPC.h>

@class NSXPCListener, NSString;

@interface ADPersonalizedAdsService : ADSingleton <NSXPCListenerDelegate, ADPersonalizedAds_XPC> {

	BOOL _requestInFlight;
	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL requestInFlight;                  //@synthesize requestInFlight=_requestInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setPersonalizedAds:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)reconcileDataForRecord:(id)arg1 ;
-(void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg1 ;
-(BOOL)requestInFlight;
-(void)setRequestInFlight:(BOOL)arg1 ;
@end

