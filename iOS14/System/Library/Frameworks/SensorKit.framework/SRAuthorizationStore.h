/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@protocol SRTCCStore, OS_dispatch_queue;
@class NSDictionary, NSHashTable, NSObject;

@interface SRAuthorizationStore : NSObject {

	int _notifyToken;
	BOOL _sensorKitActive;
	NSDictionary* _authorizationValues;
	NSDictionary* _lastModifiedAuthorizationTimes;
	NSHashTable* _delegates;
	id<SRTCCStore> _tccStore;
	NSObject*<OS_dispatch_queue> _updateQueue;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
@end

