/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_checkForDoom:(id)arg1 ;
-(void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id*)arg3 outAssertion:(FigOpaqueAssertion*)arg4 ;
-(void)releaseSession:(id)arg1 ;
-(void)dealloc;
@end

