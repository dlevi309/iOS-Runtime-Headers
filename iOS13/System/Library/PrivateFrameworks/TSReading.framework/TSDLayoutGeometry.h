/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {

	CGSize mSize;
	CGAffineTransform mTransform;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform transform; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(CGAffineTransform)transform;
-(CGRect)frame;
-(CGPoint)center;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGAffineTransform)inverseTransform;
-(BOOL)differsInMoreThanTranslationFrom:(id)arg1 ;
-(id)infoGeometry;
-(CGAffineTransform)fullTransform;
-(id)initWithInfoGeometry:(id)arg1 ;
-(id)geometryByTranslatingBy:(CGPoint)arg1 ;
-(CGAffineTransform)transformByConcatenatingTransformTo:(CGAffineTransform)arg1 ;
-(id)initWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 ;
-(id)geometryByTransformingBy:(CGAffineTransform)arg1 ;
-(id)geometryByOutsettingBy:(CGSize)arg1 ;
@end

