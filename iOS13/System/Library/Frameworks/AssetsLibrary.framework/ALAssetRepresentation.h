/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : NSObject {

	id _internal;
	BOOL _ignoreRead;

}

@property (nonatomic,retain) ALAssetRepresentationPrivate * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign) BOOL ignoreRead;                                                //@synthesize ignoreRead=_ignoreRead - In the implementation block
+(void)_enableImageDataUsesMap;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(long long)size;
-(id)url;
-(float)scale;
-(long long)orientation;
-(id)filename;
-(id)metadata;
-(ALAssetRepresentationPrivate *)internal;
-(void)setInternal:(ALAssetRepresentationPrivate *)arg1 ;
-(id)UTI;
-(CGSize)dimensions;
-(CGImageRef)fullResolutionImage;
-(id)_imageData;
-(int)_fileDescriptor;
-(unsigned long long)getBytes:(char*)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4 ;
-(CGImageRef)fullScreenImage;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 format:(unsigned short)arg2 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 ;
-(CGImageRef)zoomableDisplayImage;
-(CGImageRef)_largeDisplayableImageForFormatID:(unsigned short)arg1 ;
-(BOOL)ignoreRead;
-(void)setIgnoreRead:(BOOL)arg1 ;
@end

