/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;
@interface FBSOrientationObserverClient : FBSServiceFacilityClient {

	id<FBSOrientationObserverClientDelegate> _delegate;
	unsigned _interest;

}
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(long long)activeInterfaceOrientation;
-(void)configureConnectMessage:(id)arg1 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)registerOrientationInterest:(unsigned)arg1 ;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

