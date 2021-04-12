/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVFragmentedAssetMinderInternal, NSArray;

@interface AVFragmentedAssetMinder : NSObject {

	AVFragmentedAssetMinderInternal* _fragmentedAssetMinder;

}

@property (assign,nonatomic) double mindingInterval; 
@property (nonatomic,readonly) NSArray * assets; 
+(id)fragmentedAssetMinderWithAsset:(id)arg1 mindingInterval:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(NSArray *)assets;
-(double)mindingInterval;
-(id)initWithAsset:(id)arg1 mindingInterval:(double)arg2 ;
-(void)setMindingInterval:(double)arg1 ;
-(void)addFragmentedAsset:(id)arg1 ;
-(void)_setMindingInterval:(double)arg1 removeAllAssets:(BOOL)arg2 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(void)removeFragmentedAsset:(id)arg1 ;
@end

