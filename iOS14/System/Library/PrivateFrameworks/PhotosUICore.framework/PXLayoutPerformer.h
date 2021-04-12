/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXLayoutPerformerOutput, NSArray;


@protocol PXLayoutPerformer
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
@required
+(CGSize*)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize*)performLayout;
-(SCD_Struct_PX31)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX31)arg1;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(id)arg1;

@end

