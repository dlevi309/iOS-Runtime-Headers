/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Highlights.healthplugin/Highlights
*/

#import <UIKitCore/UIViewController.h>
#import <Highlights/Highlights.UnitChangeObserving.h>
#import <Highlights/Highlights.SignificantTimeChangeObserving.h>

@class NSString;

@interface Highlights.HighlightTileViewController : UIViewController <Highlights.UnitChangeObserving, Highlights.SignificantTimeChangeObserving> {

	 context;
	 $__lazy_storage_$_healthStore;
	 viewModel;
	 debug_textSupportVariantOverrideUpdateNotificationToken;

}

@property (copy,nonatomic) NSString * title; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)significantTimeChangeDidOccur;
-(void)unitDidChange;
-(void)updateWithShouldUpdateContentView:(BOOL)arg1 ;
@end

