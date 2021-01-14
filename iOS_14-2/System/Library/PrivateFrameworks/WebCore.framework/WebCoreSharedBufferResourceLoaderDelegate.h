/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSData, NSString;

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	ImageDecoderAVFObjC* _parent;
	long long _expectedContentSize;
	RetainPtr<NSData>* _data;
	BOOL _complete;
	Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _requests;
	Lock _dataLock;

}

@property (readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(NSData *)data;
-(void)fulfillRequest:(id)arg1 ;
-(void)fulfillPendingRequests;
-(BOOL)canFulfillRequest:(id)arg1 ;
-(void)setExpectedContentSize:(long long)arg1 ;
-(void)updateData:(id)arg1 complete:(BOOL)arg2 ;
-(id)initWithParent:(ImageDecoderAVFObjC*)arg1 ;
-(void)enqueueRequest:(id)arg1 ;
@end

