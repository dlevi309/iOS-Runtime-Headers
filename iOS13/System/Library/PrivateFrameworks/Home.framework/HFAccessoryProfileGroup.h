/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSArray, NSNumber;

@interface HFAccessoryProfileGroup : NSObject {

	NSArray* _profiles;
	NSNumber* _groupIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * profiles;                      //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)groupProfiles:(id)arg1 options:(id)arg2 ;
+(id)_groupProfilesKeyedByIdentifier:(id)arg1 options:(id)arg2 ;
+(id)_groupIdentifierForProfile:(id)arg1 options:(id)arg2 ;
+(id)_hashCombiningHashes:(id)arg1 ;
-(NSNumber *)groupIdentifier;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 ;
@end

