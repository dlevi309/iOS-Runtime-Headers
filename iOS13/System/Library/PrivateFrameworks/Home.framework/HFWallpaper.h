/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying> {

	long long _type;
	HFCroppedWallpaperInfo* _cropInfo;
	NSString* _assetIdentifier;

}

@property (nonatomic,copy) HFCroppedWallpaperInfo * cropInfo;                //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
+(CGSize)size;
+(CGSize)contentSizeForWallpaper;
+(id)customWallpaperWithAssetIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)assetIdentifier;
-(id)wallpaperIdentifier;
-(id)sliceIdentifierForVariant:(long long)arg1 ;
-(id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3 ;
-(HFCroppedWallpaperInfo *)cropInfo;
-(void)setCropInfo:(HFCroppedWallpaperInfo *)arg1 ;
@end

