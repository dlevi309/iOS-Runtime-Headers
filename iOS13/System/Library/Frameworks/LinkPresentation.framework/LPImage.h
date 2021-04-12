/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPAsynchronousResource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_group;
@class UIImage, NSData, NSString, LPImageProperties, NSItemProvider, NSObject, NSArray, NSURL;

@interface LPImage : NSObject <LPAsynchronousResource, NSSecureCoding> {

	UIImage* _originalPlatformImage;
	UIImage* _decodedPlatformImage;
	NSData* _data;
	NSString* _MIMEType;
	LPImageProperties* _properties;
	NSItemProvider* _itemProvider;
	LPImage* _imageLoadedFromItemProvider;
	NSObject*<OS_dispatch_group> _itemProviderLoadGroup;
	NSObject*<OS_dispatch_group> _asynchronousLoadGroup;
	CGSize _pixelSize;
	BOOL _hasComputedPixelSize;
	BOOL _hasTransparency;
	BOOL _hasComputedHasTransparency;
	BOOL _fallbackIcon;
	NSArray* _remoteURLsForEmailCompatibleOutput;
	LPImage* _darkInterfaceAlternativeImage;
	NSURL* _fileURL;
	UIImage* _platformImage;

}

@property (nonatomic,retain) UIImage * platformImage;                                                                         //@synthesize platformImage=_platformImage - In the implementation block
@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) CGSize _pixelSize; 
@property (nonatomic,readonly) BOOL _hasTransparency; 
@property (getter=_isAnimated,nonatomic,readonly) BOOL _animated; 
@property (assign,getter=_isFallbackIcon,nonatomic) BOOL _fallbackIcon;                                                       //@synthesize fallbackIcon=_fallbackIcon - In the implementation block
@property (nonatomic,retain) NSArray * _remoteURLsForEmailCompatibleOutput;                                                   //@synthesize remoteURLsForEmailCompatibleOutput=_remoteURLsForEmailCompatibleOutput - In the implementation block
@property (nonatomic,copy,readonly) NSString * _srcsetForRemoteURLs; 
@property (nonatomic,retain,readonly) NSItemProvider * _itemProvider; 
@property (setter=_setDarkInterfaceAlternativeImage:,nonatomic,retain) LPImage * _darkInterfaceAlternativeImage;              //@synthesize darkInterfaceAlternativeImage=_darkInterfaceAlternativeImage - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                                                 //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,copy,readonly) LPImageProperties * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_PNGImageNamed:(id)arg1 template:(BOOL)arg2 ;
+(id)_loadImageSubsampledToScreenSizeFromData:(id)arg1 ;
+(id)_PNGImageNamed:(id)arg1 ;
+(id)_PDFImageNamed:(id)arg1 template:(BOOL)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSItemProvider *)_itemProvider;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)MIMEType;
-(LPImageProperties *)properties;
-(id)_initWithImage:(id)arg1 ;
-(CGSize)_pixelSize;
-(id)initWithPlatformImage:(id)arg1 ;
-(id)initWithItemProvider:(id)arg1 properties:(id)arg2 placeholderImage:(id)arg3 ;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 ;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(id)_initWithCGImage:(CGImageRef)arg1 ;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(id)initWithPlatformImage:(id)arg1 properties:(id)arg2 ;
-(id)_initWithPlatformImageGenerator:(/*^block*/id)arg1 ;
-(void)_createDataFromPlatformImage;
-(BOOL)_shouldEncodeData;
-(void)_waitForAsynchronouslyLoadedImageIfNeeded;
-(UIImage *)platformImage;
-(void)_mapDataFromFileURL;
-(NSArray *)_remoteURLsForEmailCompatibleOutput;
-(BOOL)needsAsynchronousLoad;
-(void)loadAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_initWithImage:(id)arg1 properties:(id)arg2 ;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 ;
-(id)_initWithCGImage:(CGImageRef)arg1 properties:(id)arg2 ;
-(void)_synchronouslyDecodePlatformImageWithMaximumSize:(CGSize)arg1 ;
-(void)_preparePlatformImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_encodedSize;
-(BOOL)_isAnimated;
-(NSString *)_srcsetForRemoteURLs;
-(id)_asTemplate;
-(BOOL)_isFallbackIcon;
-(BOOL)_hasTransparency;
-(void)set_fallbackIcon:(BOOL)arg1 ;
-(void)set_remoteURLsForEmailCompatibleOutput:(NSArray *)arg1 ;
-(LPImage *)_darkInterfaceAlternativeImage;
-(void)_setDarkInterfaceAlternativeImage:(id)arg1 ;
-(void)setPlatformImage:(UIImage *)arg1 ;
@end

