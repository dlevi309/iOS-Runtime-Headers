/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableArray;

@interface FigNSURLSessionRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _sessionArray;

}
-(id)init;
-(void)dealloc;
-(void)_checkForDoom:(id)arg1 ;
-(void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id*)arg3 outAssertion:(FigOpaqueAssertion*)arg4 ;
-(void)releaseSession:(id)arg1 ;
@end

