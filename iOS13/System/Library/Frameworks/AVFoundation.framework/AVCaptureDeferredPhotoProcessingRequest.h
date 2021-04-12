/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 photoProxy:(id)arg2 ;
-(NSArray *)delegatesStorage;
-(AVCaptureDeferredPhotoProxy *)photoProxy;
@end

