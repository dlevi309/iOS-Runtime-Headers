/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutPerformer.h>

@class PXLayoutPerformerOutput, NSArray;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer> {

	NSArray* children;
	PXLayoutPerformerOutput* layoutOutput;
	SCD_Struct_PX30 layoutInput;

}

@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize)performLayout;
-(SCD_Struct_PX31)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX31)arg1 ;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(PXLayoutPerformerOutput *)arg1 ;
@end

