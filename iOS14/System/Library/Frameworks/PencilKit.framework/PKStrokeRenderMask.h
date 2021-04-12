/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PKStrokeRenderCache;
@class PKStroke;

@interface PKStrokeRenderMask : NSObject <NSCopying> {

	vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >* _maskPaths;
	PKStroke* _stroke;
	id<PKStrokeRenderCache> _renderCache;

}

@property (nonatomic,readonly) PKStroke * stroke;                                //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,readonly) id<PKStrokeRenderCache> renderCache;              //@synthesize renderCache=_renderCache - In the implementation block
-(PKStroke *)stroke;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)maskPaths;
-(id)initWithStroke:(id)arg1 renderCache:(id)arg2 maskPaths:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg3 ;
-(id<PKStrokeRenderCache>)renderCache;
@end

