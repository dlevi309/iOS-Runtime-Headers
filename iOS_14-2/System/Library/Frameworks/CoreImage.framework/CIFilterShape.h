/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finalize;
-(CGRect)extent;
-(id)description;
-(id)initWithRect:(CGRect)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)initWithStruct:(filterShape*)arg1 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(id)unionWith:(id)arg1 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

