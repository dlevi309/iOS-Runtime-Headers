/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TSPDocumentResourceDownloadObserverManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _downloadObserversMap;

}
+(id)sharedManager;
-(id)init;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 options:(unsigned long long)arg4 isInternalObserver:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)notifyDownloadObserversForDigestString:(id)arg1 withStatus:(long long)arg2 info:(id)arg3 wait:(BOOL)arg4 ;
@end

