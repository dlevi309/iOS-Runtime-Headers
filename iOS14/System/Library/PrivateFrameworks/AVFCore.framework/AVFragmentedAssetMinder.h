/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVFragmentedAssetMinderInternal, NSArray;

@interface AVFragmentedAssetMinder : NSObject {

	AVFragmentedAssetMinderInternal* _fragmentedAssetMinder;

}

@property (assign,nonatomic) double mindingInterval; 
@property (nonatomic,readonly) NSArray * assets; 
+(id)fragmentedAssetMinderWithAsset:(id)arg1 mindingInterval:(double)arg2 ;
-(NSArray *)assets;
-(id)init;
-(double)mindingInterval;
-(id)initWithAsset:(id)arg1 mindingInterval:(double)arg2 ;
-(void)setMindingInterval:(double)arg1 ;
-(void)addFragmentedAsset:(id)arg1 ;
-(void)_setMindingInterval:(double)arg1 removeAllAssets:(BOOL)arg2 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(void)removeFragmentedAsset:(id)arg1 ;
-(void)dealloc;
@end

