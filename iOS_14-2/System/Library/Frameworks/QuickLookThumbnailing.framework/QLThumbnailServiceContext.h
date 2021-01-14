/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/QLThumbnailServiceSurfaceGeneratorProtocol.h>
#import <libobjc.A.dylib/QLThumbnailService.h>

@class QLThumbnailProvider, NSString;

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService> {

	QLThumbnailProvider* _thumbnailProvider;

}

@property (nonatomic,retain) QLThumbnailProvider * thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)protocolHost;
-(void)setThumbnailProvider:(QLThumbnailProvider *)arg1 ;
-(QLThumbnailProvider *)thumbnailProvider;
-(void)ioSurfaceForRequest:(id)arg1 withSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 generatorData:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)_thumbnailGenerationQueue;
-(id)protocolHostWithErrorHandler:(/*^block*/id)arg1 ;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 additionalResourcesWrapper:(id)arg6 generatorData:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
@end

