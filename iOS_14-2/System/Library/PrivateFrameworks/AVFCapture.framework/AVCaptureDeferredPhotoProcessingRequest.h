/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class AVCaptureDeferredPhotoProxy, NSMutableArray, NSArray;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject {

	AVCaptureDeferredPhotoProxy* _photoProxy;
	unsigned _firedCallbackFlags;
	NSMutableArray* _delegatesStorage;

}

@property (readonly) NSArray * delegatesStorage;                            //@synthesize delegatesStorage=_delegatesStorage - In the implementation block
@property (readonly) AVCaptureDeferredPhotoProxy * photoProxy;              //@synthesize photoProxy=_photoProxy - In the implementation block
@property (assign,nonatomic) unsigned firedCallbackFlags;                   //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
-(void)addDelegate:(id)arg1 ;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 photoProxy:(id)arg2 ;
-(NSArray *)delegatesStorage;
-(AVCaptureDeferredPhotoProxy *)photoProxy;
-(unsigned)firedCallbackFlags;
-(void)dealloc;
@end

