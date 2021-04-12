/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHAsset;

@interface PUActivityAssetItem : NSObject <NSCopying> {

	BOOL _excludeLiveness;
	BOOL _excludeLocation;
	BOOL _excludeCaption;
	BOOL _excludeAccessibilityDescription;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL excludeLiveness;                              //@synthesize excludeLiveness=_excludeLiveness - In the implementation block
@property (assign,nonatomic) BOOL excludeLocation;                              //@synthesize excludeLocation=_excludeLocation - In the implementation block
@property (assign,nonatomic) BOOL excludeCaption;                               //@synthesize excludeCaption=_excludeCaption - In the implementation block
@property (assign,nonatomic) BOOL excludeAccessibilityDescription;              //@synthesize excludeAccessibilityDescription=_excludeAccessibilityDescription - In the implementation block
+(id)itemsForAssets:(id)arg1 ;
-(id)localIdentifier;
-(id)init;
-(PHAsset *)asset;
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToActivityAssetItem:(id)arg1 ;
-(BOOL)excludeLiveness;
-(void)setExcludeLiveness:(BOOL)arg1 ;
-(BOOL)excludeLocation;
-(void)setExcludeLocation:(BOOL)arg1 ;
-(BOOL)excludeCaption;
-(void)setExcludeCaption:(BOOL)arg1 ;
-(BOOL)excludeAccessibilityDescription;
-(void)setExcludeAccessibilityDescription:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

