/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HFAccessoryProfileFiltering.h>

@class HFAccessoryProfileFilterOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering> {

	HFAccessoryProfileFilterOptions* _filterOptions;
	HMHome* _home;
	NSMutableSet* _profileItems;

}

@property (nonatomic,retain) NSMutableSet * profileItems;                                  //@synthesize profileItems=_profileItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                              //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFAccessoryProfileFilterOptions * filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(HFAccessoryProfileFilterOptions *)filterOptions;
-(void)setFilterOptions:(HFAccessoryProfileFilterOptions *)arg1 ;
-(id)invalidationReasons;
-(id)_supportedProfileClasses;
-(id)_profileItemForProfile:(id)arg1 ;
-(NSMutableSet *)profileItems;
-(void)setProfileItems:(NSMutableSet *)arg1 ;
@end

