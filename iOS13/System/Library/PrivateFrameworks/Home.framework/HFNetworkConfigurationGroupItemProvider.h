/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider {

	HMHome* _home;
	NSMutableSet* _groupItems;

}

@property (nonatomic,retain) NSMutableSet * groupItems;              //@synthesize groupItems=_groupItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                        //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(NSMutableSet *)groupItems;
-(void)setGroupItems:(NSMutableSet *)arg1 ;
@end

