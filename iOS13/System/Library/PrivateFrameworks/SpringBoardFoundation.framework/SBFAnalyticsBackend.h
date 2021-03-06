/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface SBFAnalyticsBackend : NSObject <SBFAnalyticsBackendEventHandling> {

	NSMutableArray* _asyncEventHandlers;
	NSMutableArray* _syncEventHandlers;
	NSMutableDictionary* _stateQueryHandlers;
	NSObject*<OS_dispatch_queue> _queryHandlerQueue;
	NSObject*<OS_dispatch_queue> _asyncHandlerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)registerEventHandler:(id)arg1 ;
-(void)registerSynchronousEventHandler:(id)arg1 ;
-(void)registerForQueryName:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)stateForQueryName:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

