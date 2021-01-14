/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject {

	ICCloudItemIDList* _cloudItemIDList;

}

@property (nonatomic,retain) ICCloudItemIDList * cloudItemIDList;              //@synthesize cloudItemIDList=_cloudItemIDList - In the implementation block
+(id)cloudItemIDListForPlaylist:(id)arg1 ;
-(id)init;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(id)ICCloudItemIDList;
-(ICCloudItemIDList *)cloudItemIDList;
-(void)setCloudItemIDList:(ICCloudItemIDList *)arg1 ;
@end

