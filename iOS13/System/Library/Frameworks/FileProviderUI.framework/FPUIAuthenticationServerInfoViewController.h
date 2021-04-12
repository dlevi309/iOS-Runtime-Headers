/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@protocol FPUIAuthenticationServerRepresentation, FPUIAuthenticationServerInfoDelegate;
@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {

	id<FPUIAuthenticationServerRepresentation> _serverRepresentation;
	id<FPUIAuthenticationServerInfoDelegate> _serverInfoDelegate;

}

@property (assign,nonatomic,__weak) id<FPUIAuthenticationServerInfoDelegate> serverInfoDelegate;              //@synthesize serverInfoDelegate=_serverInfoDelegate - In the implementation block
-(void)viewDidLoad;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)removeButtonTapped:(id)arg1 ;
-(void)setupTableViewSections;
-(id<FPUIAuthenticationServerInfoDelegate>)serverInfoDelegate;
-(id)initWithServerRepresentation:(id)arg1 ;
-(id)defaultLeftBarButtonItem;
-(void)setServerInfoDelegate:(id<FPUIAuthenticationServerInfoDelegate>)arg1 ;
@end

