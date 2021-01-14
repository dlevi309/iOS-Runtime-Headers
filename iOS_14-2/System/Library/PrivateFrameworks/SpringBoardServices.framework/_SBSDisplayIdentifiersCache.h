/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerChangedBlock:(/*^block*/id)arg1 ;
-(id)displayIdentifiers;
-(void)dealloc;
-(void)_queue_noteChanged;
@end

