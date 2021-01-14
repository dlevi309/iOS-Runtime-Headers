/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

