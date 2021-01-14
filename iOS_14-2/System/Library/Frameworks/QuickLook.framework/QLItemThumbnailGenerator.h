/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLItemThumbnailGeneratorProtocol.h>

@class QLExtensionThumbnailGenerator, NSString;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol> {

	QLExtensionThumbnailGenerator* _extensionGenerator;

}

@property (nonatomic,retain) QLExtensionThumbnailGenerator * extensionGenerator;              //@synthesize extensionGenerator=_extensionGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_generateThumbnailWithURL:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(CGSize)arg3 minimumDimension:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_generateThumbnailForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExtensionGenerator:(QLExtensionThumbnailGenerator *)arg1 ;
-(void)generateThumbnailForItem:(id)arg1 ofSize:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)generateThumbnailForItem:(id)arg1 ofSize:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_generateThumbnailWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_fetcherClassesForPreviewItem:(id)arg1 ;
-(QLExtensionThumbnailGenerator *)extensionGenerator;
@end

