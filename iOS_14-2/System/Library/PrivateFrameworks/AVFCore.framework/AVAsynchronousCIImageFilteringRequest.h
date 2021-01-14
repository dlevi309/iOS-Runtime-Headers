/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_AV6 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(CIImage *)sourceImage;
-(SCD_Struct_AV6)compositionTime;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 cancellationTest:(/*^block*/id)arg3 defaultCIContextProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(CGSize)renderSize;
-(void)finishWithError:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

