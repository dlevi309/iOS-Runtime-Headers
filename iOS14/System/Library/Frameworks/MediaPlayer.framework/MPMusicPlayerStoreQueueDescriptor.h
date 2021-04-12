/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, NSMutableDictionary, NSString, NSDictionary;

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _storeIDs;
	NSMutableDictionary* _storeFronts;
	NSString* _startItemID;
	NSDictionary* _assetStoreFronts;

}

@property (nonatomic,copy) NSDictionary * assetStoreFronts;              //@synthesize assetStoreFronts=_assetStoreFronts - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs;                           //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,copy) NSString * startItemID;                       //@synthesize startItemID=_startItemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2 ;
-(void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2 ;
-(NSDictionary *)assetStoreFronts;
-(NSString *)startItemID;
-(void)setStartItemID:(NSString *)arg1 ;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

