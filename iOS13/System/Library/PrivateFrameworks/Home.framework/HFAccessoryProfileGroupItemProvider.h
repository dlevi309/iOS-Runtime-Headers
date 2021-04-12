/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HFAccessoryProfileFiltering.h>
#import <libobjc.A.dylib/HFAccessoryProfileGrouping.h>

@class HFAccessoryProfileFilterOptions, HFAccessoryProfileGroupOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileGroupItemProvider : HFItemProvider <HFAccessoryProfileFiltering, HFAccessoryProfileGrouping> {

	HFAccessoryProfileFilterOptions* _filterOptions;
	HFAccessoryProfileGroupOptions* _groupOptions;
	HMHome* _home;
	NSMutableSet* _profileGroupItems;

}

@property (nonatomic,retain) NSMutableSet * profileGroupItems;                             //@synthesize profileGroupItems=_profileGroupItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                              //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFAccessoryProfileFilterOptions * filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
@property (nonatomic,retain) HFAccessoryProfileGroupOptions * groupOptions;                //@synthesize groupOptions=_groupOptions - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(HFAccessoryProfileGroupOptions *)groupOptions;
-(void)setGroupOptions:(HFAccessoryProfileGroupOptions *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(HFAccessoryProfileFilterOptions *)filterOptions;
-(void)setFilterOptions:(HFAccessoryProfileFilterOptions *)arg1 ;
-(id)invalidationReasons;
-(id)_supportedProfileClasses;
-(id)_profileGroupItemForProfiles:(id)arg1 groupIdentifier:(id)arg2 ;
-(NSMutableSet *)profileGroupItems;
-(void)setProfileGroupItems:(NSMutableSet *)arg1 ;
@end

