/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class NSNumber;

@interface PHImageResult : PHCompositeMediaResult {

	CGImageRef _imageRef;
	NSNumber* _exifOrientation;

}

@property (nonatomic,copy) NSNumber * exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(void)dealloc;
-(CGImageRef)imageRef;
-(NSNumber *)exifOrientation;
-(void)setExifOrientation:(NSNumber *)arg1 ;
-(id)imageURL;
-(id)imageData;
-(void)setImageData:(id)arg1 ;
-(BOOL)containsValidData;
-(id)imageUTI;
-(long long)uiOrientation;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(void)setImageUTI:(id)arg1 ;
@end

