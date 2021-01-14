/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class NSMapTable;

@interface AVTAssetResourceCache : NSObject {

	NSMapTable* _resources;
	unsigned long long _policy;

}

@property (assign,nonatomic) unsigned long long policy;              //@synthesize policy=_policy - In the implementation block
-(void)setPolicy:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)policy;
-(void)retainAsset:(id)arg1 ;
-(id)resourceForAsset:(id)arg1 ;
-(void)releaseAsset:(id)arg1 ;
@end

