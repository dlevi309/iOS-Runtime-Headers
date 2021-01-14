/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@protocol OS_dispatch_semaphore;
@class NSObject, TXRImageInfo;

@interface TXRDeferredImageInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	TXRImageInfo* _info;

}

@property (nonatomic,retain) TXRImageInfo * info;              //@synthesize info=_info - In the implementation block
-(TXRImageInfo *)info;
-(id)init;
-(void)setInfo:(TXRImageInfo *)arg1 ;
-(void)signalLoaded;
@end

