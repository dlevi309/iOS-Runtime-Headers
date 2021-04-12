/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUBadgeInfoPromise : NSObject <NSCopying> {

	/*^block*/id _countProvider;
	PXAssetBadgeInfo _badgeInfo;

}

@property (nonatomic,readonly) PXAssetBadgeInfo badgeInfo;              //@synthesize badgeInfo=_badgeInfo - In the implementation block
-(id)initWithBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(id)initWithBadgeInfo:(PXAssetBadgeInfo)arg1 countProvider:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(PXAssetBadgeInfo)badgeInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

