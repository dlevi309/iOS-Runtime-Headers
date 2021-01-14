/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetContainer.h>

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {

	NSString* _title;
	NSOrderedSet* _assets;
	PLManagedAsset* _keyAsset;
	PLManagedAsset* _secondaryKeyAsset;
	PLManagedAsset* _tertiaryKeyAsset;

}

@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset;                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset;                   //@synthesize secondaryKeyAsset=_secondaryKeyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset;                    //@synthesize tertiaryKeyAsset=_tertiaryKeyAsset - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)assetsCount;
-(NSOrderedSet *)assets;
-(unsigned long long)videosCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)photosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(id)initWithTitle:(id)arg1 assets:(id)arg2 ;
-(NSArray *)localizedLocationNames;
-(unsigned long long)approximateCount;
-(BOOL)canShowAvalancheStacks;
-(BOOL)canShowComments;
-(long long)_countOfAssetType:(short)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)isEmpty;
-(NSString *)title;
@end

