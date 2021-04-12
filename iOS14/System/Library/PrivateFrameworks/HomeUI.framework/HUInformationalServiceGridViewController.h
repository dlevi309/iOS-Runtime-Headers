/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class NSSet, NSString;

@interface HUInformationalServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate> {

	NSSet* _accessoriesToDisplay;

}

@property (nonatomic,copy) NSSet * accessoriesToDisplay;              //@synthesize accessoriesToDisplay=_accessoriesToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(NSSet *)accessoriesToDisplay;
-(void)setAccessoriesToDisplay:(NSSet *)arg1 ;
@end

