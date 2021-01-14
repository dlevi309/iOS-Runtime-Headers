/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKLeaderboardSetInternal, NSString, NSArray;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {

	GKLeaderboardSetInternal* _internal;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain,readonly) NSArray * leaderboardIdentifiers; 
@property (retain) GKLeaderboardSetInternal * internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadLeaderboardSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)miniImageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(void)setInternal:(GKLeaderboardSetInternal *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(GKLeaderboardSetInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadLeaderboardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)loadLeaderboardsWithHandler:(/*^block*/id)arg1 ;
@end

