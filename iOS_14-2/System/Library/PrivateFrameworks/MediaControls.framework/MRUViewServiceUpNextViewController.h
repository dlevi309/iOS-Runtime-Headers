/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MRUViewServiceViewController.h>

@class MPMediaControlsConfiguration, UILabel, NSString;

@interface MRUViewServiceUpNextViewController : UIViewController <MRUViewServiceViewController> {

	MPMediaControlsConfiguration* configuration;
	/*^block*/id dismissalBlock;
	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration; 
@property (nonatomic,copy) id dismissalBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPMediaControlsConfiguration *)configuration;
-(void)viewDidLoad;
-(void)setDismissalBlock:(id)arg1 ;
-(id)dismissalBlock;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)viewDidLayoutSubviews;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(void)transitionToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

