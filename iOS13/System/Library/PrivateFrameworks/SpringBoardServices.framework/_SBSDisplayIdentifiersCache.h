/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface _SBSDisplayIdentifiersCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _displayIdentifiers;
	int _changedToken;
	/*^block*/id _changedBlock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_queue_noteChanged;
-(id)displayIdentifiers;
-(void)registerChangedBlock:(/*^block*/id)arg1 ;
@end

