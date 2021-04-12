/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject {

	BOOL _delayedFiringInProgress;
	double _lastFiringTimeSince1970;
	NSMapTable* _blockMap;
	NSMutableSet* _objects;

}
-(id)init;
@end

