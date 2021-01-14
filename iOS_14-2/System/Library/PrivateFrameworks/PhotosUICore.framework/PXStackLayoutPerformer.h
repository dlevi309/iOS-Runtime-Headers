/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXStackLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	long long _layoutAxis;
	CGSize _interItemSpacing;
	CGSize _itemSize;

}

@property (assign,nonatomic) long long layoutAxis;                                //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                             //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                     //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setLayoutAxis:(long long)arg1 ;
-(NSArray *)children;
-(CGSize)interItemSpacing;
-(CGSize)itemSize;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(long long)layoutAxis;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(void)setChildren:(NSArray *)arg1 ;
-(CGSize)_calculateSizeForLayout;
-(void)_performLayoutPass;
-(void)setItemSize:(CGSize)arg1 ;
@end

