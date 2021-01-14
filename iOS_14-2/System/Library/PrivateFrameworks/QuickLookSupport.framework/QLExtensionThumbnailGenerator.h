/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/

#import <QuickLookSupport/QuickLookSupport-Structs.h>
#import <libobjc.A.dylib/QLThumbnailSurfaceGeneratorProtocol.h>

@class QLExtensionManager, NSString;

@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol> {

	QLExtensionManager* _extensionManager;

}

@property (nonatomic,retain) QLExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)arg1 ;
+(BOOL)hasThirdPartyThumbnailGeneratorForContentType:(id)arg1 ;
+(BOOL)hasThumbnailGeneratorForContentType:(id)arg1 firstPartyExtension:(BOOL)arg2 ;
-(QLExtensionManager *)extensionManager;
-(id)init;
-(void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg1 ofSize:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 generatorData:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setExtensionManager:(QLExtensionManager *)arg1 ;
-(void)ioSurfaceWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(id)_generateImageFromRawData:(id)arg1 withContextSize:(CGSize)arg2 scale:(double)arg3 ;
-(id)_generateImageFromURL:(id)arg1 withSize:(CGSize)arg2 scale:(double)arg3 ;
@end

