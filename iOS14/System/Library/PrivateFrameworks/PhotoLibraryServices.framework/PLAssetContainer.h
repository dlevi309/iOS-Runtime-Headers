/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@optional
-(NSDate *)endDate;
-(NSDate *)startDate;

@required
-(unsigned long long)assetsCount;
-(NSOrderedSet *)assets;
-(unsigned long long)videosCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)photosCount;
-(void)setKeyAsset:(id)arg1;
-(NSArray *)localizedLocationNames;
-(unsigned long long)approximateCount;
-(BOOL)canShowAvalancheStacks;
-(BOOL)canShowComments;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(BOOL)isEmpty;
-(NSString *)title;

@end

