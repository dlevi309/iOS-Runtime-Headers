/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@protocol OS_dispatch_semaphore;
@class NSObject, TXRImageInfo;

@interface TXRDeferredImageInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	TXRImageInfo* _info;

}

@property (nonatomic,retain) TXRImageInfo * info;              //@synthesize info=_info - In the implementation block
-(id)init;
-(TXRImageInfo *)info;
-(void)setInfo:(TXRImageInfo *)arg1 ;
-(void)signalLoaded;
@end

