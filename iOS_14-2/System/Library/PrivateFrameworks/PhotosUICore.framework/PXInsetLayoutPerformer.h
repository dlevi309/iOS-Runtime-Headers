/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXInsetLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic) UIEdgeInsets layoutInsets;                           //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(UIEdgeInsets)layoutInsets;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
@end

