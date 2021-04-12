/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
*/

@class NSString;


@protocol LOViewController <NSObject>
@property (assign,getter=isForSnapshot,nonatomic) BOOL forSnapshot; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL didFinishDismissing; 
@property (assign,nonatomic,__weak) id<LOViewControllerDelegate> viewControllerDelegate; 
@required
-(void)setForSnapshot:(BOOL)arg1;
-(NSString *)bundleIdentifier;
-(void)setViewControllerDelegate:(id)arg1;
-(BOOL)isForSnapshot;
-(void)setBundleIdentifier:(id)arg1;
-(BOOL)didFinishDismissing;
-(id<LOViewControllerDelegate>)viewControllerDelegate;

@end

