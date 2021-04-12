/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class VKIconManager;

@interface MKTransitArtworkManager : NSObject {

	VKIconManager* _iconManager;

}

@property (nonatomic,readonly) VKIconManager * iconManager;              //@synthesize iconManager=_iconManager - In the implementation block
+(id)sharedInstance;
-(void)purge;
-(VKIconManager *)iconManager;
-(id)initWithIconManager:(id)arg1 ;
-(id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 widthPaddingMultiple:(double)arg6 ;
-(id)_imageFroMVKImage:(id)arg1 ;
-(id)_createImageWithBlockInAutoreleasePoolIfNeeded:(/*^block*/id)arg1 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 ;
-(id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7 ;
-(BOOL)_isMemoryConstrained;
-(id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 nightMode:(BOOL)arg5 withWidthPaddingMultiple:(double)arg6 fullBleedColor:(id*)arg7 ;
@end

