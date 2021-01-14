/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
-(void)setCompletionHandler:(id)arg1 ;
-(CVBufferRef)sourcePBuf;
-(id)completionHandler;
-(AVAsynchronousVideoCompositionRequest *)compositingRequest;
-(void)setCompositingRequest:(AVAsynchronousVideoCompositionRequest *)arg1 ;
-(id)cancellationTest;
-(void)setCancellationTest:(id)arg1 ;
-(CIImage *)sourceCIImage;
-(id)defaultCIContextProvider;
-(void)setDefaultCIContextProvider:(id)arg1 ;
-(void)setSourceCIImage:(CIImage *)arg1 ;
-(void)setSourcePBuf:(CVBufferRef)arg1 ;
-(void)_willDeallocOrFinalize;
-(void)dealloc;
@end

