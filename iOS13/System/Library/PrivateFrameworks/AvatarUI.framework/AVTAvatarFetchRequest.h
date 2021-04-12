/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray;

@interface AVTAvatarFetchRequest : NSObject {

	NSArray* _identifiers;
	NSArray* _excludingIdentifiers;
	long long _criteria;
	long long _fetchLimit;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * excludingIdentifiers;              //@synthesize excludingIdentifiers=_excludingIdentifiers - In the implementation block
@property (nonatomic,readonly) long long criteria;                               //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) long long fetchLimit;                             //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(id)requestForCustomAvatars;
+(id)requestForPredefinedAvatars;
+(id)requestForCustomAvatarsWithLimit:(long long)arg1 ;
+(id)requestForAllAvatars;
+(id)requestForAllAvatarsExcluding:(id)arg1 ;
+(id)requestForAvatarWithIdentifier:(id)arg1 ;
+(id)requestForAvatarsWithIdentifiers:(id)arg1 ;
+(id)requestForStorePrimaryAvatar;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)fetchLimit;
-(NSArray *)identifiers;
-(long long)criteria;
-(id)initWithCriteria:(long long)arg1 ;
-(id)initWithCriteria:(long long)arg1 identifiers:(id)arg2 excludedIdentifiers:(id)arg3 fetchLimit:(long long)arg4 ;
-(id)initWithCriteria:(long long)arg1 identifier:(id)arg2 ;
-(NSArray *)excludingIdentifiers;
@end

