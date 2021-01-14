/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSData, NSString;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _horizontallyFlipped;
	UIImage* _underlyingImage;

}

@property (nonatomic,retain) UIImage * underlyingImage;                                          //@synthesize underlyingImage=_underlyingImage - In the implementation block
@property (assign,getter=isHorizontallyFlipped,nonatomic) BOOL horizontallyFlipped;              //@synthesize horizontallyFlipped=_horizontallyFlipped - In the implementation block
@property (nonatomic,readonly) CRKImage * localizedImage; 
@property (nonatomic,copy,readonly) NSData * PNGRepresentation; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(double)screenScale;
+(id)imageWithUnderlyingImage:(id)arg1 ;
+(id)templateImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)templateImageNamed:(id)arg1 ;
+(CGImageRef)resizedCGImageFromImage:(CGImageRef)arg1 newSize:(CGSize)arg2 ;
-(CGSize)size;
-(BOOL)isEqualToImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)accessibilityDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)PNGRepresentation;
-(void)setHorizontallyFlipped:(BOOL)arg1 ;
-(id)initWithUnderlyingImage:(id)arg1 ;
-(UIImage *)underlyingImage;
-(id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(BOOL)arg2 ;
-(BOOL)layoutIsLeftToRight;
-(id)flippedUnderlyingImage;
-(id)imageByResizingToSize:(CGSize)arg1 ;
-(BOOL)isHorizontallyFlipped;
-(CRKImage *)localizedImage;
-(id)imageByEnlargingCanvasToSize:(CGSize)arg1 ;
-(id)imageByAspectFittingToBox:(CGSize)arg1 ;
-(id)JPEGRepresentationWithCompressionFactor:(double)arg1 ;
-(BOOL)isLargerThanSize:(CGSize)arg1 ;
-(void)setUnderlyingImage:(UIImage *)arg1 ;
@end

