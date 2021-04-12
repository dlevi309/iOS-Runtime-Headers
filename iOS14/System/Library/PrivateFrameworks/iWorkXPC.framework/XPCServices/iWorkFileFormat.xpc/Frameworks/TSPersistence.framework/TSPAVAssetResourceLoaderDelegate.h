/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
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
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)delegateQueue;
-(void)dealloc;
-(id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2 ;
-(void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2 ;
@end

