/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary, NSArray;

@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	vImage_Buffer* _regionMap;
	CGRect _userBBox;
	Geometry2D_rect2D_ _internalAlignedBBox;
	BOOL _deallocateBuffer;
	NSDictionary* _pixelValueToRegionLabelMap;
	NSArray* _regionLabels;

}

@property (copy) NSArray * regionLabels;                                        //@synthesize regionLabels=_regionLabels - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 regionMap:(vImage_Buffer*)arg2 deallocateBuffer:(BOOL)arg3 userBBox:(CGRect)arg4 alignedBBox:(Geometry2D_rect2D_)arg5 valueToLabelMap:(id)arg6 ;
-(id)getRegionLabels;
-(id)regionNameAtNormalizedAlignedFaceCoordinate:(CGPoint)arg1 ;
-(id)regionNameAtImageCoordinate:(CGPoint)arg1 imageSize:(CGSize)arg2 ;
-(id)regionNameAtNormalizedFaceCoordinate:(CGPoint)arg1 ;
-(NSArray *)regionLabels;
-(void)setRegionLabels:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

