/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue, TSUReadChannel;
@class TSPFileDataStorage, NSObject, NSString;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	TSPFileDataStorage* _dataStorage;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<TSUReadChannel> _readChannel;
	NSObject*<OS_dispatch_queue> _concurrentRequestQueue;
	NSString* _contentTypeUTI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegateQueue;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2 ;
-(void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2 ;
@end

