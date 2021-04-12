/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface ATXMediaApplications : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _mediaApps;

}
-(id)init;
-(void)_updateMediaApps;
-(BOOL)appSupportsMedia:(id)arg1 ;
@end

