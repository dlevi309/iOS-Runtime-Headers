/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;
	NSSet* _fences;
	NSMutableDictionary* _locationsCache;

}

@property (nonatomic,retain) NSMutableDictionary * locationsCache;              //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSSet * followers;                                 //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;                                 //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * fences;                                    //@synthesize fences=_fences - In the implementation block
+(id)sharedInstance;
-(void)setLocations:(NSSet *)arg1 ;
-(NSSet *)locations;
-(id)locationForHandle:(id)arg1 ;
-(void)abPreferencesDidChange;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)locationsCache;
-(NSSet *)followers;
-(NSSet *)following;
-(id)followingForHandle:(id)arg1 ;
-(void)setFollowers:(NSSet *)arg1 ;
-(void)setFollowing:(NSSet *)arg1 ;
-(void)setFences:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(void)abDidChange;
-(id)favoritesOrdered;
-(NSSet *)fences;
@end

