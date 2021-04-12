/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureProviderDelegate.h>

@class PXGStringTextureProvider, PXGPPTStringsLayout;

@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate> {

	PXGStringTextureProvider* _stringTextureProvider;
	PXGPPTStringsLayout* _stringsLayout;
	/*^block*/id _textureProviderDidProvideCGImageHandler;

}

@property (nonatomic,retain) PXGStringTextureProvider * stringTextureProvider;              //@synthesize stringTextureProvider=_stringTextureProvider - In the implementation block
@property (nonatomic,retain) PXGPPTStringsLayout * stringsLayout;                           //@synthesize stringsLayout=_stringsLayout - In the implementation block
@property (nonatomic,copy) id textureProviderDidProvideCGImageHandler;                      //@synthesize textureProviderDidProvideCGImageHandler=_textureProviderDidProvideCGImageHandler - In the implementation block
-(void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3 ;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1 ;
-(void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg1 didProvideCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(CGRect)arg5 forRequestID:(int)arg6 ;
-(PXGStringTextureProvider *)stringTextureProvider;
-(PXGPPTStringsLayout *)stringsLayout;
-(void)runRenderTextTestWithOptions:(id)arg1 latencyMeter:(id)arg2 completionHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)setStringTextureProvider:(PXGStringTextureProvider *)arg1 ;
-(void)setStringsLayout:(PXGPPTStringsLayout *)arg1 ;
-(id)textureProviderDidProvideCGImageHandler;
-(void)setTextureProviderDidProvideCGImageHandler:(id)arg1 ;
-(void)textureProvider:(id)arg1 didProvidePixelBuffer:(CVBufferRef)arg2 orientationTransform:(CGAffineTransform)arg3 forRequestID:(int)arg4 ;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1 ;
@end

