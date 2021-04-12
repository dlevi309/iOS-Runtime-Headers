/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@class UIImage, OITSUUIImageAutoreleasePoolGuard;

@interface OITSUUIImage : OITSUImage {

	UIImage* mUIImage;
	OITSUUIImageAutoreleasePoolGuard* mGuard;

}
+(id)imageNamed:(id)arg1 ;
+(void)i_performBlockWithUIImageLock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(long long)imageOrientation;
-(CGImageRef)CGImage;
-(id)UIImage;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2 ;
@end

