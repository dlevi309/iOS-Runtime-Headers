/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setThumbnailProvider:(QLThumbnailProvider *)arg1 ;
-(QLThumbnailProvider *)thumbnailProvider;
-(id)protocolHost;
-(void)ioSurfaceForRequest:(id)arg1 withSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_thumbnailGenerationQueue;
-(id)protocolHostWithErrorHandler:(/*^block*/id)arg1 ;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 additionalResourcesWrapper:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

