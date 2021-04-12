/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer {

	NSArray* children;
	PXLayoutPerformerOutput* layoutOutput;
	SCD_Struct_PX30 layoutInput;

}
-(id)children;
-(CGSize)performLayout;
-(SCD_Struct_PX31)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX31)arg1 ;
-(id)layoutOutput;
-(void)setLayoutOutput:(id)arg1 ;
@end

