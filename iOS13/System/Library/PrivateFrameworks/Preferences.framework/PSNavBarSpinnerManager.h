/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRecords;

}
+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(BOOL)arg3 ;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
@end

