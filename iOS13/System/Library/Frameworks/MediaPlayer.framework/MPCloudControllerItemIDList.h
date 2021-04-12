/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject {

	ICCloudItemIDList* _cloudItemIDList;

}
+(id)cloudItemIDListForPlaylist:(id)arg1 ;
-(id)init;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)ICCloudItemIDList;
@end

