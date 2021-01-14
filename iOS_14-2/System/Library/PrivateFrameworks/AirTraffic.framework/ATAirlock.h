/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@class NSFileManager, NSString;

@interface ATAirlock : NSObject {

	NSFileManager* _fm;
	NSString* _basePath;

}
+(id)sharedInstance;
-(id)pathForDataclass:(id)arg1 ;
-(id)pathForAsset:(id)arg1 withDataclass:(id)arg2 ;
-(id)init;
-(void)copyAssetToAirlock:(id)arg1 ;
-(void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 ;
-(id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2 ;
-(id)lyricsPathForDataclass:(id)arg1 lyricsIdentifier:(id)arg2 ;
-(void)evacuate;
-(void)evacuateDataclasses:(id)arg1 ;
-(id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2 ;
-(void)processCompletedAsset:(id)arg1 ;
-(void)createAirlockForDataclasses:(id)arg1 ;
@end

