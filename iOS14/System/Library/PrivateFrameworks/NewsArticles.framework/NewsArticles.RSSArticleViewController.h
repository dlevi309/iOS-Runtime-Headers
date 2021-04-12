/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>

@class NSArray;

@interface NewsArticles.RSSArticleViewController : UIViewController <NULoadingDelegate> {

	 identifier;
	 article;
	 contentContext;
	 contentViewController;
	 contentBackgroundColor;
	 observableScrollView;
	 styler;
	 eventHandler;
	 keyCommandManager;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(NSArray *)keyCommands;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)handleKeyCommandWithKeyCommand:(id)arg1 ;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

