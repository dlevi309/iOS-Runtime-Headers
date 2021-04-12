/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)suspend;
-(void)handleURL:(id)arg1;
-(void)willBecomeActive;
-(void)willResignActive;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 withCompletion:(/*^block*/id)arg4;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)statusBarWillAnimateByHeight:(double)arg1;
-(void)highlightSpecifierWithID:(id)arg1;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)pushController:(id)arg1;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;

@required
-(id)specifier;
-(void)setSpecifier:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)setParentController:(id)arg1;
-(id)parentController;
-(void)setRootController:(id)arg1;
-(id)rootController;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

