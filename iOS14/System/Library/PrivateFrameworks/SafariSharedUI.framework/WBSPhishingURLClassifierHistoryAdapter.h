/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol OS_dispatch_queue;
@class WBSHistory, NSObject;

@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier> {

	WBSHistory* _history;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithHistory:(id)arg1 ;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

