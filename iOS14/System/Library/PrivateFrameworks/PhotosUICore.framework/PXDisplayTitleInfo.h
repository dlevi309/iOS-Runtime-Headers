/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class NSString, PHAssetCollection;

@interface PXDisplayTitleInfo : PXObservable <PXPhotoLibraryUIChangeObserver> {

	BOOL _useVerboseSmartDescription;
	NSString* _title;
	NSString* _subtitle;
	NSString* _fontName;
	PHAssetCollection* __assetCollection;

}

@property (setter=_setAssetCollection:,nonatomic,retain) PHAssetCollection * _assetCollection;              //@synthesize _assetCollection=__assetCollection - In the implementation block
@property (assign,nonatomic) BOOL useVerboseSmartDescription;                                               //@synthesize useVerboseSmartDescription=_useVerboseSmartDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontName;                                                    //@synthesize fontName=_fontName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 defaultTitle:(id)arg3 defaultTitleCategory:(long long)arg4 titleKey:(id)arg5 titleCategoryKey:(id)arg6 defaultSubtitle:(id)arg7 subtitleKey:(id)arg8 simulatedLoadingDelay:(double)arg9 preferredAttributesPromise:(/*^block*/id)arg10 ;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)init;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updatePropertiesFromAssetCollection;
-(NSString *)description;
-(BOOL)useVerboseSmartDescription;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 fontName:(id)arg3 ;
-(id)mutableChangeObject;
-(void)setUseVerboseSmartDescription:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(PHAssetCollection *)_assetCollection;
-(void)_setAssetCollection:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 useVerboseSmartDescription:(BOOL)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSString *)title;
@end

