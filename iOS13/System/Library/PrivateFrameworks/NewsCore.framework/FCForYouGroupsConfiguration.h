/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSDictionary;

@interface FCForYouGroupsConfiguration : NSObject {

	NSString* _configuration;
	double _weekendGreatStoriesYouMissedTimeRange;
	NSDictionary* _groupConfigurationsByIdentifier;

}

@property (nonatomic,copy) NSDictionary * groupConfigurationsByIdentifier;                //@synthesize groupConfigurationsByIdentifier=_groupConfigurationsByIdentifier - In the implementation block
@property (nonatomic,readonly) double weekendGreatStoriesYouMissedTimeRange;              //@synthesize weekendGreatStoriesYouMissedTimeRange=_weekendGreatStoriesYouMissedTimeRange - In the implementation block
+(id)_groupIdentifiersByType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSONConfiguration:(id)arg1 ;
-(id)configurationForGroupType:(long long)arg1 ;
-(double)weekendGreatStoriesYouMissedTimeRange;
-(unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1 ;
-(unsigned long long)_defaultPrecedingGroupsCount:(long long)arg1 ;
-(BOOL)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1 ;
-(id)_identifierForGroupType:(long long)arg1 ;
-(NSDictionary *)groupConfigurationsByIdentifier;
-(void)setGroupConfigurationsByIdentifier:(NSDictionary *)arg1 ;
@end

