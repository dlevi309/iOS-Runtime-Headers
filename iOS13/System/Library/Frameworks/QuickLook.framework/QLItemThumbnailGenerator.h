/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLItemThumbnailGeneratorProtocol.h>

@class QLExtensionThumbnailGenerator, QLItemURLThumbnailGenerator, QLItemDataThumbnailGenerator, NSString;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol> {

	QLExtensionThumbnailGenerator* _extensionGenerator;
	QLItemURLThumbnailGenerator* _urlGenerator;
	QLItemDataThumbnailGenerator* _dataGenerator;

}

@property (nonatomic,retain) QLExtensionThumbnailGenerator * extensionGenerator;              //@synthesize extensionGenerator=_extensionGenerator - In the implementation block
@property (nonatomic,retain) QLItemURLThumbnailGenerator * urlGenerator;                      //@synthesize urlGenerator=_urlGenerator - In the implementation block
@property (nonatomic,retain) QLItemDataThumbnailGenerator * dataGenerator;                    //@synthesize dataGenerator=_dataGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)generateThumbnailForItem:(id)arg1 ofSize:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)generateThumbnailForItem:(id)arg1 ofSize:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)_fetcherClassesForPreviewItem:(id)arg1 ;
-(QLExtensionThumbnailGenerator *)extensionGenerator;
-(QLItemURLThumbnailGenerator *)urlGenerator;
-(QLItemDataThumbnailGenerator *)dataGenerator;
-(void)setExtensionGenerator:(QLExtensionThumbnailGenerator *)arg1 ;
-(void)setUrlGenerator:(QLItemURLThumbnailGenerator *)arg1 ;
-(void)setDataGenerator:(QLItemDataThumbnailGenerator *)arg1 ;
@end

