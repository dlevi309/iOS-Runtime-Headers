/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) ICPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(void)execute;
-(id)init;
-(id)initWithPlayActivityController:(id)arg1 ;
-(ICPlayActivityController *)playActivityController;
@end

