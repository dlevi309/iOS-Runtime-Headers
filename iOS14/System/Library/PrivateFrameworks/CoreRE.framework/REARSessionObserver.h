/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/ARInternalSessionObserver.h>

@class ARSession, NSMutableSet, NSString;

@interface REARSessionObserver : NSObject <ARInternalSessionObserver> {

	ARSession* _session;
	NSMutableSet* _activeChunks;
	Queue<QueuedUpdateMessage>* _queuedUpdates;
	UnfairLock _queueLock;
	SCD_Struct_RE47 _renderTransform;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)session:(id)arg1 didAddAnchors:(id)arg2 ;
-(void)session:(id)arg1 didUpdateAnchors:(id)arg2 ;
-(void)session:(id)arg1 didRemoveAnchors:(id)arg2 ;
-(void)dealloc;
-(id)init:(id)arg1 ;
-(void)session:(id)arg1 ;
-(Queue<QueuedUpdateMessage>*)getQueuedUpdatesSinceLast;
@end

