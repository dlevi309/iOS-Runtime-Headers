/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_AV7 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(CGSize)renderSize;
-(void)_willDeallocOrFinalize;
-(SCD_Struct_AV7)compositionTime;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 cancellationTest:(/*^block*/id)arg3 defaultCIContextProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(CIImage *)sourceImage;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
@end

