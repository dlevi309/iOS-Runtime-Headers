/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {

	NSMutableArray* _assets[34];
	NSMutableDictionary* _assetsByName[34];

}
+(id)sharedAssetLibrary;
-(void)reload;
-(id)assetWithType:(long long)arg1 identifier:(id)arg2 ;
@end

