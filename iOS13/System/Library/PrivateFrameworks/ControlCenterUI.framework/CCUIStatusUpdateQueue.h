/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {

	NSMutableArray* _queuedIdentifiers;
	NSMutableDictionary* _latestUpdateByIdentifier;

}
-(id)init;
-(void)removeAllStatusUpdates;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(id)dequeueNextStatusUpdate;
@end

