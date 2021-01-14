/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/


@protocol OS_dispatch_queue, AEInvalidationRouterDelegate;
@class NSObject, NSError;

@interface AEInvalidationRouter : NSObject {

	BOOL _processedInvalidation;
	BOOL _forwardError;
	NSObject*<OS_dispatch_queue> _queue;
	id<AEInvalidationRouterDelegate> _delegate;
	long long _mode;
	NSError* _storedError;

}

@property (nonatomic,readonly) id invalidationHandler; 
-(id)init;
-(id)invalidationHandler;
-(void)setRouterMode:(long long)arg1 ;
-(void)fetchCapturedErrorWithCompletion:(/*^block*/id)arg1 ;
-(void)setRouterDelegate:(id)arg1 ;
@end

