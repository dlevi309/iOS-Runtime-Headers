/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>
#import <libobjc.A.dylib/TUKeyCommandParentTraversable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/NAArticleFooterType.h>
#import <libobjc.A.dylib/NAEndOfArticleResultProviderType.h>

@interface NewsArticles.EndOfArticleViewController : UIViewController <SXDocumentSectionItemProvider, TUKeyCommandParentTraversable, TUKeyCommandTraversable, TUDeselectable, NAArticleFooterType, NAEndOfArticleResultProviderType> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 footerDelegate;
	 resultProviderDelegate;
	 overriddenTraitCollection;
	 gutterViewController;
	 bottomSpacerView;

}

@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
@property (assign,__weak,nonatomic) id<NAArticleFooterDelegate> footerDelegate; 
@property (assign,__weak,nonatomic) id<NAEndOfArticleResultProviderDelegate> resultProviderDelegate; 
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
-(void)childTraversable:(id)arg1 didExitTraversalWithDirection:(long long)arg2 ;
-(void)childTraversable:(id)arg1 didExcludeScrollKeyCommand:(id)arg2 flags:(long long)arg3 ;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)deselect;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<NAArticleFooterDelegate>)footerDelegate;
-(void)setFooterDelegate:(id<NAArticleFooterDelegate>)arg1 ;
-(id<NAEndOfArticleResultProviderDelegate>)resultProviderDelegate;
-(void)setResultProviderDelegate:(id<NAEndOfArticleResultProviderDelegate>)arg1 ;
@end

