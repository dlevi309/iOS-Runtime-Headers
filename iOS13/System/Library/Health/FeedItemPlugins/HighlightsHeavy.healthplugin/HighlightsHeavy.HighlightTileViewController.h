/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/HighlightsHeavy.healthplugin/HighlightsHeavy
*/

#import <UIKitCore/UIViewController.h>
#import <HighlightsHeavy/HighlightsHeavy.UnitChangeObserving.h>
#import <HighlightsHeavy/HighlightsHeavy.SignificantTimeChangeObserving.h>

@class NSString;

@interface HighlightsHeavy.HighlightTileViewController : UIViewController <HighlightsHeavy.UnitChangeObserving, HighlightsHeavy.SignificantTimeChangeObserving> {

	 context;
	 viewModel;
	 $__lazy_storage_$_textLabel;
	 $__lazy_storage_$_horizontalRule;
	 $__lazy_storage_$_highlightContentView;
	 debug_textSupportVariantOverrideUpdateNotificationToken;

}

@property (copy,nonatomic) NSString * title; 
-(void)handleDebugTapWithGesture:(id)arg1 ;
-(void)handleDebugSwipeWithGesture:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)update;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)significantTimeChangeDidOccur;
-(void)unitDidChange;
@end

