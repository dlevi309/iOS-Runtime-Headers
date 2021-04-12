/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGAnchorConstraints.h>

@class NSMutableArray, NSArray;

@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints> {

	NSMutableArray* _constraints;

}

@property (nonatomic,copy,readonly) NSArray * constraints; 
-(NSArray *)constraints;
-(void)_keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned)arg5 offset:(double)arg6 ;
-(id)init;
-(void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4 ;
-(void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3 ;
-(void)keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned)arg4 offset:(double)arg5 ;
-(void)keepEdge:(unsigned)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned)arg4 offset:(double)arg5 ;
@end

