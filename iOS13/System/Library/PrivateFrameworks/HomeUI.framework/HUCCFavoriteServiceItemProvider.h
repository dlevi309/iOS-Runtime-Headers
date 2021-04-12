/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HUCCFavoriteItemProvider.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {

	unsigned long long _maximumNumberOfItems;
	HMHome* _home;
	NSMutableSet* _serviceLikeItems;

}

@property (nonatomic,retain) NSMutableSet * serviceLikeItems;                      //@synthesize serviceLikeItems=_serviceLikeItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                      //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(unsigned long long)maximumNumberOfItems;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(id)invalidationReasons;
-(NSMutableSet *)serviceLikeItems;
-(void)setServiceLikeItems:(NSMutableSet *)arg1 ;
@end

