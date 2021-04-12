/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HUTriggerItemProvider : HFItemProvider {

	BOOL _usesRichIconDescriptors;
	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _triggerItems;

}

@property (nonatomic,retain) NSMutableSet * triggerItems;               //@synthesize triggerItems=_triggerItems - In the implementation block
@property (nonatomic,copy) id filter;                                   //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL usesRichIconDescriptors;              //@synthesize usesRichIconDescriptors=_usesRichIconDescriptors - In the implementation block
@property (nonatomic,readonly) HMHome * home;                           //@synthesize home=_home - In the implementation block
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)init;
-(id)items;
-(BOOL)usesRichIconDescriptors;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setUsesRichIconDescriptors:(BOOL)arg1 ;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(NSMutableSet *)triggerItems;
-(void)setTriggerItems:(NSMutableSet *)arg1 ;
@end

