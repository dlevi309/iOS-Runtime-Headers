/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	long long _layoutAxis;
	double _layoutRatio;
	double _interItemSpacing;

}

@property (assign,nonatomic) long long layoutAxis;                                //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) double layoutRatio;                                  //@synthesize layoutRatio=_layoutRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setLayoutAxis:(long long)arg1 ;
-(NSArray *)children;
-(double)interItemSpacing;
-(void)setInterItemSpacing:(double)arg1 ;
-(long long)layoutAxis;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(void)setChildren:(NSArray *)arg1 ;
-(double)layoutRatio;
-(void)setLayoutRatio:(double)arg1 ;
@end

