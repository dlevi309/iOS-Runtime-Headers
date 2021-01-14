/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface RBPersonaManager : NSObject {

	long long _personalID;
	NSMutableDictionary* _cachedPersonaIdentifiers;
	NSObject*<OS_dispatch_queue> _lockQueue;

}
-(id)init;
@end

