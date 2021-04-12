/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSDisplayLayoutServiceAssertion, BSServiceConnectionEndpoint, NSMapTable, FBSDisplayLayout, NSString;

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable> {

	os_unfair_lock_s _lock;
	_FBSDisplayLayoutServiceAssertion* _lock_handlerAssertion;
	BOOL _lock_invalidated;
	BSServiceConnectionEndpoint* _deprecated_endpoint;
	/*^block*/id _lock_deprecated_handler;
	NSMapTable* _lock_deprecated_observerAssertions;
	char _deprecated_qos;
	long long _deprecated_displayType;
	BOOL _deprecated_singleton;
	BOOL _deprecated_mutable;

}

@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(id)monitorWithConfiguration:(id)arg1 ;
+(id)sharedMonitorForDisplayType:(long long)arg1 ;
+(id)serviceIdentifier;
+(id)_endpointForDisplayType:(long long)arg1 ;
+(id)mainDisplayInstanceIdentifier;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(/*^block*/id)handler;
-(void)setHandler:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(unsigned long long)qualityOfService;
-(void)removeObserver:(id)arg1 ;
-(id)initWithDisplayType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(long long)displayType;
-(FBSDisplayLayout *)currentLayout;
-(id)initWithDisplayType:(long long)arg1 ;
-(id)_initWithConfiguration:(id)arg1 singleton:(BOOL)arg2 needsDefaultPriority:(BOOL)arg3 mutable:(BOOL)arg4 displayType:(long long)arg5 mutableHandler:(/*^block*/id)arg6 ;
-(id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end

