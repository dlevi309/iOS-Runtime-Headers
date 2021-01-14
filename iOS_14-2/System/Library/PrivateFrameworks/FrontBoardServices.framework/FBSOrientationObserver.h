/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)activeInterfaceOrientation;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(id)_getAndSetFreshestUpdateGivenUpdate:(id)arg1 ;
-(void)client:(id)arg1 handleOrientationUpdate:(id)arg2 ;
-(void)handleOrientationResetForClient:(id)arg1 ;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
@end

