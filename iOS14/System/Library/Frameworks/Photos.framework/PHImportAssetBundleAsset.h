/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHImportAsset.h>

@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset {

	PFAssetBundle* _assetBundle;

}

@property (nonatomic,retain) PFAssetBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(id)assetDescription;
-(id)accessibilityDescription;
-(PFAssetBundle *)assetBundle;
-(void)setAssetBundle:(PFAssetBundle *)arg1 ;
-(id)initWithAssetBundleAtURL:(id)arg1 withImportSource:(id)arg2 ;
-(id)keywordTitles;
-(id)exifImageDate;
-(id)exifTimeZone;
-(id)title;
@end

