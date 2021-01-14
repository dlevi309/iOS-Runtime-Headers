/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternal:(ALAssetRepresentationPrivate *)arg1 ;
-(long long)size;
-(CGSize)dimensions;
-(id)filename;
-(float)scale;
-(ALAssetRepresentationPrivate *)internal;
-(CGImageRef)fullResolutionImage;
-(id)url;
-(id)description;
-(id)_imageData;
-(BOOL)isValid;
-(long long)orientation;
-(CGImageRef)fullScreenImage;
-(unsigned long long)getBytes:(char*)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)UTI;
-(int)_fileDescriptor;
-(id)metadata;
-(void)dealloc;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 format:(unsigned short)arg2 ;
-(CGImageRef)CGImageWithOptions:(id)arg1 ;
-(CGImageRef)zoomableDisplayImage;
-(CGImageRef)_largeDisplayableImageForFormatID:(unsigned short)arg1 ;
-(BOOL)ignoreRead;
-(void)setIgnoreRead:(BOOL)arg1 ;
@end

