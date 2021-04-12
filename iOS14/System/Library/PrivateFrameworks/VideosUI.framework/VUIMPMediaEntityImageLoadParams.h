/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long imageType;                 //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)init;
-(NSString *)description;
-(MPMediaItem *)mediaItem;
-(NSString *)imageIdentifier;
-(unsigned long long)hash;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(unsigned long long)imageType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 andImageType:(unsigned long long)arg2 ;
-(BOOL)calculatedIdentifier;
-(void)setCalculatedIdentifier:(BOOL)arg1 ;
@end

