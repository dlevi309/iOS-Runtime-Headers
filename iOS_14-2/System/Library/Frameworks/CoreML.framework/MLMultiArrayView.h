/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLMultiArray.h>

@class MLMultiArray;

@interface MLMultiArrayView : MLMultiArray {

	MLMultiArray* _parent;

}

@property (nonatomic,readonly) MLMultiArray * parent;              //@synthesize parent=_parent - In the implementation block
+(void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id*)arg3 resultingStrides:(id*)arg4 ;
+(BOOL)isSqueezableShape:(id)arg1 ;
+(BOOL)isSqueezableShape:(id)arg1 dimensions:(id)arg2 ;
-(MLMultiArray *)parent;
-(id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(BOOL)arg4 error:(id*)arg5 ;
-(id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id*)arg3 ;
-(id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2 ;
@end

