/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController {

	BOOL _linkPreviewing;
	NSArray* _articleIDs;
	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;

}

@property (nonatomic,copy) NSArray * articleIDs;                                                                             //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) _UIResilientRemoteViewContainerViewController * remoteViewContainerViewController;              //@synthesize remoteViewContainerViewController=_remoteViewContainerViewController - In the implementation block
@property (assign,getter=isLinkPreviewing,nonatomic) BOOL linkPreviewing;                                                    //@synthesize linkPreviewing=_linkPreviewing - In the implementation block
+(BOOL)canOpenURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)requestRemoteViewController;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(id)initWithArticleID:(id)arg1 ;
-(void)setLinkPreviewing:(BOOL)arg1 ;
-(BOOL)isLinkPreviewing;
-(id)initWithArticleIDs:(id)arg1 ;
-(_UIResilientRemoteViewContainerViewController *)remoteViewContainerViewController;
-(void)setupRemoteViewController:(id)arg1 ;
-(void)setRemoteViewContainerViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
@end

