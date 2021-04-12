/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSVPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(id)init;
-(void)execute;
-(id)initWithPlayActivityController:(id)arg1 ;
-(SSVPlayActivityController *)playActivityController;
@end

