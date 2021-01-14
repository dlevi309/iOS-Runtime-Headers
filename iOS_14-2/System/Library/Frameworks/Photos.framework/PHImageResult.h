/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {

	CGImageRef _imageRef;
	BOOL _isPlaceholder;
	BOOL _degraded;
	NSNumber* _exifOrientation;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy) NSNumber * exifOrientation;                    //@synthesize exifOrientation=_exifOrientation - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(void)setImageURL:(id)arg1 ;
-(BOOL)isPlaceholder;
-(NSString *)uniformTypeIdentifier;
-(id)sanitizedInfoDictionary;
-(void)setExifOrientation:(NSNumber *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(NSNumber *)exifOrientation;
-(BOOL)isDegraded;
-(id)imageData;
-(id)allowedInfoKeys;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(CGImageRef)imageRef;
-(BOOL)containsValidData;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)setHighDynamicRangeGainMap:(CVBufferRef)arg1 orientation:(unsigned)arg2 averagePixelLuminance:(id)arg3 ;
-(id)imageURL;
-(void)setDegraded:(BOOL)arg1 ;
-(void)setImageData:(id)arg1 ;
-(void)dealloc;
-(long long)uiOrientation;
@end

