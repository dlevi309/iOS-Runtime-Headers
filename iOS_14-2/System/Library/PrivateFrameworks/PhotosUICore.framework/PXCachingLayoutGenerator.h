/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCachingLayoutGenerator : PXLayoutGenerator {

	BOOL _isValid;
	CGSize _contentSize;
	CGRect* _itemRects;
	long long* _itemKinds;
	long long _itemCapacity;

}
-(CGSize)size;
-(void)_updateIfNeeded;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)updateContentSize:(out CGSize*)arg1 itemRects:(out CGRect*)arg2 ;
-(void)invalidate;
-(void)updateContentSize:(out CGSize*)arg1 itemRects:(out CGRect*)arg2 itemKinds:(out long long*)arg3 ;
-(void)dealloc;
@end

