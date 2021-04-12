/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <ShareSheet/UIActivityViewController.h>

@class NSMutableDictionary, NSArray;

@interface SUActivityViewController : UIActivityViewController {

	NSMutableDictionary* _customTitles;
	NSArray* _suActivityItems;
	long long _transitionSafetyCount;

}
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
@end

