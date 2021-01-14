/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)UIImage;
-(CGSize)size;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)p_initWithUIImage:(id)arg1 needsGuard:(BOOL)arg2 ;
@end

