/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUKeyCommandParentTraversable.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>
#import <libobjc.A.dylib/NAArticleFooterType.h>
#import <libobjc.A.dylib/NAEndOfArticleResultProviderType.h>

@interface NewsArticles.EndOfArticleViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TUKeyCommandParentTraversable, SXDocumentSectionItemProvider, NAArticleFooterType, NAEndOfArticleResultProviderType> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 footerDelegate;
	 resultProviderDelegate;
	 overriddenTraitCollection;
	 gutterViewController;
	 bottomSpacerView;
	 urlHandler;

}

@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
@property (assign,__weak,nonatomic) id<NAArticleFooterDelegate> footerDelegate; 
@property (assign,__weak,nonatomic) id<NAEndOfArticleResultProviderDelegate> resultProviderDelegate; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)childTraversable:(id)arg1 didExitTraversalWithDirection:(long long)arg2 ;
-(void)childTraversable:(id)arg1 didExcludeScrollKeyCommand:(id)arg2 flags:(long long)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)deselect;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<NAArticleFooterDelegate>)footerDelegate;
-(void)setFooterDelegate:(id<NAArticleFooterDelegate>)arg1 ;
-(id<NAEndOfArticleResultProviderDelegate>)resultProviderDelegate;
-(void)setResultProviderDelegate:(id<NAEndOfArticleResultProviderDelegate>)arg1 ;
@end

