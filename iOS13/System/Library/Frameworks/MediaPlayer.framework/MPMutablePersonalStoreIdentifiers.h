/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString;


@protocol MPMutablePersonalStoreIdentifiers <MPPersonalStoreIdentifiers>
@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * cloudAlbumID; 
@property (nonatomic,copy) NSString * recommendationID; 
@required
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1;
-(NSString *)cloudAlbumID;
-(void)setCloudAlbumID:(id)arg1;
-(NSString *)recommendationID;
-(void)setRecommendationID:(id)arg1;

@end

