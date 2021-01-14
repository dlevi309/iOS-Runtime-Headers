/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRightItems;
	NSMutableDictionary* _savedLeftItems;
	NSMutableDictionary* _navigationItems;

}
+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
@end

