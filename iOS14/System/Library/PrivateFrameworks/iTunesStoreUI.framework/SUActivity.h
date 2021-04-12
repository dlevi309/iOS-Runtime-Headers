/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <ShareSheet/UIActivity.h>

@protocol SUActivityDelegate;
@class UIImage, NSString, UIViewController;

@interface SUActivity : UIActivity {

	id<SUActivityDelegate> _delegate;
	UIImage* _suActivityImage;
	NSString* _suActivityTitle;
	NSString* _suActivityType;
	UIViewController* _suActivityViewController;

}

@property (assign,nonatomic,__weak) id<SUActivityDelegate> ITunesStoreDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setActivityType:(id)arg1 ;
-(void)setActivityImage:(id)arg1 ;
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setActivityTitle:(id)arg1 ;
-(void)setActivityViewController:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)activityImage;
-(void)dealloc;
-(id)activityViewController;
-(void)setITunesStoreDelegate:(id<SUActivityDelegate>)arg1 ;
-(id<SUActivityDelegate>)ITunesStoreDelegate;
@end

