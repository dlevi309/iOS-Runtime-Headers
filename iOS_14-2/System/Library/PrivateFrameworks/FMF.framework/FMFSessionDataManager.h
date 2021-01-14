/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)locations;
-(void)abPreferencesDidChange;
-(NSSet *)fences;
-(void)abDidChange;
-(void)setLocations:(NSSet *)arg1 ;
-(void)setFollowing:(NSSet *)arg1 ;
-(void)setFences:(NSSet *)arg1 ;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
-(id)locationForHandle:(id)arg1 ;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(NSMutableDictionary *)locationsCache;
-(NSSet *)following;
-(void)setFollowers:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(id)favoritesOrdered;
-(id)followingForHandle:(id)arg1 ;
-(NSSet *)followers;
@end

