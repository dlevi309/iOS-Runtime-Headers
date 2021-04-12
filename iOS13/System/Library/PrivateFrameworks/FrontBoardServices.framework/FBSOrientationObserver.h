/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSOrientationObserverClientDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class FBSOrientationObserverClient, NSObject, FBSOrientationUpdate, NSString;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable> {

	FBSOrientationObserverClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callback_queue;
	/*^block*/id _handler;
	FBSOrientationUpdate* _freshestUpdate;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)_getAndSetFreshestUpdateGivenUpdate:(id)arg1 ;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 handleOrientationUpdate:(id)arg2 ;
-(void)handleOrientationResetForClient:(id)arg1 ;
@end

