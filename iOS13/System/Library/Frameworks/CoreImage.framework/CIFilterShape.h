/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CIFilterShape : NSObject <NSCopying> {

	unsigned _pad;
	void* _priv;

}

@property (readonly) CGRect extent; 
+(id)_shapeInfinite;
+(id)shapeWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(CGRect)extent;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithStruct:(filterShape*)arg1 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(BOOL)arg2 ;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)unionWith:(id)arg1 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
@end

