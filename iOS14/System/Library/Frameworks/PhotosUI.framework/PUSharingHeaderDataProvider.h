/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSString, NSOrderedSet;


@protocol PUSharingHeaderDataProvider <NSObject>
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) long long sourceOrigin; 
@property (nonatomic,copy,readonly) id<PXDisplayAsset> keyAsset; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedSelectedAssets; 
@property (nonatomic,readonly) PXAssetMediaTypeCount assetTypeCount; 
@property (nonatomic,readonly) BOOL isActionSheet; 
@property (nonatomic,readonly) BOOL shareAsCMM; 
@property (nonatomic,readonly) BOOL excludeLiveness; 
@property (nonatomic,readonly) BOOL excludeLocation; 
@property (nonatomic,readonly) BOOL sendAsOriginals; 
@property (nonatomic,readonly) BOOL excludeCaption; 
@property (nonatomic,readonly) BOOL excludeAccessibilityDescription; 
@required
-(NSString *)localizedTitle;
-(id<PXDisplayAsset>)keyAsset;
-(NSString *)localizedSubtitle;
-(BOOL)excludeLiveness;
-(BOOL)excludeLocation;
-(BOOL)excludeCaption;
-(BOOL)excludeAccessibilityDescription;
-(BOOL)shareAsCMM;
-(BOOL)isActionSheet;
-(long long)sourceOrigin;
-(NSOrderedSet *)orderedSelectedAssets;
-(PXAssetMediaTypeCount)assetTypeCount;
-(BOOL)sendAsOriginals;

@end

