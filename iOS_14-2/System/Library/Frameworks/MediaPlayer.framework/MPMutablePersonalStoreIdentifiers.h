/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPMutablePersonalStoreIdentifiers <MPPersonalStoreIdentifiers>
@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * cloudAlbumID; 
@property (nonatomic,copy) NSString * recommendationID; 
@required
-(void)setCloudAlbumID:(id)arg1;
-(NSString *)recommendationID;
-(void)setRecommendationID:(id)arg1;
-(NSString *)cloudAlbumID;
-(void)setCloudID:(unsigned long long)arg1;
-(unsigned long long)cloudID;

@end

