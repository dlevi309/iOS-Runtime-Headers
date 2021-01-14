/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;
@class NSObject, NSString, NSHashTable;

@interface SBSRemoteAlertHandle : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	BOOL _active;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	BOOL _valid;
	id<SBSRemoteAlertHandleClient> _handleClient;
	NSString* _handleID;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSString * handleID;                 //@synthesize handleID=_handleID - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 ;
+(id)defaultHandleClient;
+(id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 configurationContext:(id)arg3 ;
+(id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
+(id)lookupHandlesForDefinition:(id)arg1 ;
+(void)setDefaultHandleClient:(id)arg1 ;
+(id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(BOOL)arg2 ;
+(id)handleWithConfiguration:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSString *)handleID;
-(BOOL)isActive;
-(BOOL)isValid;
-(void)removeObserver:(id)arg1 ;
-(void)activateWithContext:(id)arg1 ;
-(void)invalidate;
-(void)_didDeactivate;
-(void)_didActivate;
-(void)activateWithOptions:(id)arg1 ;
-(void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(BOOL)arg2 ;
-(id)_initWithHandleID:(id)arg1 handleClient:(id)arg2 ;
-(void)_receivedInvalidationWithError:(id)arg1 ;
@end

