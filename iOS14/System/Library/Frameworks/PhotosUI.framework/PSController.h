/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PSController <PSStateRestoration>
@optional
+(id)searchBundle;
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
-(void)willBecomeActive;
-(void)handleURL:(id)arg1;
-(void)suspend;
-(void)didLock;
-(void)didWake;
-(void)didUnlock;
-(void)willResignActive;
-(void)pushController:(id)arg1;
-(void)willUnlock;
-(void)statusBarWillAnimateByHeight:(double)arg1;
-(void)highlightSpecifierWithID:(id)arg1;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 withCompletion:(/*^block*/id)arg4;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;

@required
-(void)setSpecifier:(id)arg1;
-(id)specifier;
-(id)rootController;
-(void)setParentController:(id)arg1;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id)parentController;
-(void)setRootController:(id)arg1;
-(id)readPreferenceValue:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;

@end

