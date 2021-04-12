/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {

	NSMutableArray* _queuedIdentifiers;
	NSMutableDictionary* _latestUpdateByIdentifier;

}
-(void)removeAllStatusUpdates;
-(id)init;
-(id)dequeueNextStatusUpdate;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
@end

