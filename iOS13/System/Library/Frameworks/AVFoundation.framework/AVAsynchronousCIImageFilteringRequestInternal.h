/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAsynchronousVideoCompositionRequest, CIImage;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject {

	AVAsynchronousVideoCompositionRequest* _compositingRequest;
	/*^block*/id _cancellationTest;
	/*^block*/id _defaultCIContextProvider;
	/*^block*/id _completionHandler;
	CIImage* _sourceCIImage;
	CVBufferRef _sourcePBuf;

}

@property (nonatomic,retain) AVAsynchronousVideoCompositionRequest * compositingRequest;              //@synthesize compositingRequest=_compositingRequest - In the implementation block
@property (nonatomic,copy) id cancellationTest;                                                       //@synthesize cancellationTest=_cancellationTest - In the implementation block
@property (nonatomic,copy) id defaultCIContextProvider;                                               //@synthesize defaultCIContextProvider=_defaultCIContextProvider - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CIImage * sourceCIImage;                                                 //@synthesize sourceCIImage=_sourceCIImage - In the implementation block
@property (nonatomic,retain) CVBufferRef sourcePBuf;                                                  //@synthesize sourcePBuf=_sourcePBuf - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(AVAsynchronousVideoCompositionRequest *)compositingRequest;
-(void)setCompositingRequest:(AVAsynchronousVideoCompositionRequest *)arg1 ;
-(id)cancellationTest;
-(void)setCancellationTest:(id)arg1 ;
-(id)defaultCIContextProvider;
-(void)setDefaultCIContextProvider:(id)arg1 ;
-(CIImage *)sourceCIImage;
-(void)setSourceCIImage:(CIImage *)arg1 ;
-(CVBufferRef)sourcePBuf;
-(void)setSourcePBuf:(CVBufferRef)arg1 ;
@end

