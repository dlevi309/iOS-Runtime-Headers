/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject {

	NSMutableArray* _assets[28];
	NSMutableDictionary* _assetsByName[28];

}
+(id)sharedAvatarAssetLibrary;
-(void)reload;
-(id)assetsWithType:(long long)arg1 ;
-(id)assetWithType:(long long)arg1 identifier:(id)arg2 ;
@end

