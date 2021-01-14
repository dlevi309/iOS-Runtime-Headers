/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXMutableMemoryViewModel <NSObject>
@property (nonatomic,retain) NSString * localizedDateText; 
@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset; 
@property (assign,nonatomic) BOOL isHighlighted; 
@property (assign,nonatomic) long long specSet; 
@property (assign,nonatomic) long long variant; 
@property (assign,nonatomic) UIEdgeInsets layoutMargins; 
@required
-(void)setLocalizedTitle:(id)arg1;
-(NSString *)localizedTitle;
-(long long)specSet;
-(id<PXDisplayAsset>)keyAsset;
-(void)setKeyAsset:(id)arg1;
-(long long)variant;
-(void)setVariant:(long long)arg1;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1;
-(BOOL)isHighlighted;
-(NSString *)localizedDateText;
-(void)setLocalizedDateText:(id)arg1;
-(void)setIsHighlighted:(BOOL)arg1;
-(void)setSpecSet:(long long)arg1;

@end

