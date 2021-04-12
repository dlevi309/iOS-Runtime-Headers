/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUConfigurator.h>

@class NSArray;

@interface HUStaticConfigurator : HUConfigurator {

	NSArray* _staticViewControllers;

}

@property (nonatomic,copy) NSArray * staticViewControllers;              //@synthesize staticViewControllers=_staticViewControllers - In the implementation block
-(void)setStaticViewControllers:(NSArray *)arg1 ;
-(NSArray *)staticViewControllers;
-(id)_nextViewControllerForResults:(id)arg1 ;
-(id)initWithConfiguratorDelegate:(id)arg1 viewControllers:(id)arg2 ;
-(id)initWithConfiguratorDelegate:(id)arg1 contentViewControllers:(id)arg2 ;
@end

