/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class VKIconManager;

@interface MKTransitArtworkManager : NSObject {

	VKIconManager* _iconManager;

}

@property (nonatomic,readonly) VKIconManager * iconManager;              //@synthesize iconManager=_iconManager - In the implementation block
+(id)sharedInstance;
-(VKIconManager *)iconManager;
-(void)purge;
-(id)_imageFroMVKImage:(id)arg1 ;
-(id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 widthPaddingMultiple:(double)arg6 ;
-(id)_createImageWithBlockInAutoreleasePoolIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)_isMemoryConstrained;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7 ;
-(id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7 ;
-(id)initWithIconManager:(id)arg1 ;
@end

