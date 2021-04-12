/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)messageAddedWithMessage:(id)arg1 ;
-(void)messageRepeatCountUpdatedWithCount:(int)arg1 ;
-(void)messagesCleared;
-(void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id*)arg3 ;
@end

