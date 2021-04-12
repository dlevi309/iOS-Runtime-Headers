/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	NSObject*<OS_dispatch_queue> resolveQueue;
	NSObject*<OS_dispatch_queue> cacheAccessQueue;
	NSObject*<OS_dispatch_queue> callbackQueue;
	BOOL startedResolving;

}

@property (nonatomic,retain) NSString * thingToResolve; 
@property (assign,nonatomic) int resolveType; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> resolveQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> cacheAccessQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) BOOL startedResolving; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cleanup;
-(NSString *)thingToResolve;
-(int)resolveType;
-(NSObject*<OS_dispatch_queue>)resolveQueue;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(BOOL)startedResolving;
-(void)setResolveType:(int)arg1 ;
-(void)setThingToResolve:(NSString *)arg1 ;
-(void)setStartedResolving:(BOOL)arg1 ;
@end

