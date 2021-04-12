/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIImageLoadParams.h>

@class NSString, MPMediaItem, MPArtworkCatalog;

@interface VUIMPMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {

	BOOL _calculatedIdentifier;
	NSString* _imageIdentifier;
	unsigned long long _imageType;
	MPMediaItem* _mediaItem;
	MPArtworkCatalog* _artworkCatalog;

}

@property (assign,nonatomic) BOOL calculatedIdentifier;                      //@synthesize calculatedIdentifier=_calculatedIdentifier - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem;                        //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long imageType;                 //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)imageType;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(NSString *)imageIdentifier;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(id)initWithMediaItem:(id)arg1 andImageType:(unsigned long long)arg2 ;
-(BOOL)calculatedIdentifier;
-(void)setCalculatedIdentifier:(BOOL)arg1 ;
@end

