/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXProtoMutableFeatureView <NSObject>
@property (nonatomic,retain) id<PXProtoFeature> feature; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@required
-(void)setDisabled:(BOOL)arg1;
-(id<PXProtoFeature>)feature;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(BOOL)isDisabled;
-(void)setFeature:(id)arg1;

@end

