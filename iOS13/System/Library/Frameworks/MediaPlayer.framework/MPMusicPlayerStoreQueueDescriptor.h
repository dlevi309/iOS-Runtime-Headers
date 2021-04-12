/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithStoreID:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithStoreID:(id)arg2 ;
-(void)setSourceStorefront:(id)arg1 forItemWithStoreID:(id)arg2 ;
-(NSArray *)storeIDs;
-(NSDictionary *)assetStoreFronts;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSString *)startItemID;
-(void)setStartItemID:(NSString *)arg1 ;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
@end

