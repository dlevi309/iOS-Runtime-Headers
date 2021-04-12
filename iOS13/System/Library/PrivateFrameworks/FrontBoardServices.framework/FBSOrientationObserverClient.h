/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;
@interface FBSOrientationObserverClient : FBSServiceFacilityClient {

	id<FBSOrientationObserverClientDelegate> _delegate;
	unsigned _interest;

}
-(void)invalidate;
-(long long)activeInterfaceOrientation;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)registerOrientationInterest:(unsigned)arg1 ;
-(void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
@end

