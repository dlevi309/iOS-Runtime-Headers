/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying> {

	PXLayoutGeometry* _geometries;
	long long _count;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)initWithGeometries:(PXLayoutGeometry*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

