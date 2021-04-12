/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFDiagnosticsProviderContext;
@class NSOrderedSet, WFNetworkSettingsCellFactory, WFHyperlinkFooterView;

@interface WFDiagnosticsTableViewController : UITableViewController {

	id<WFDiagnosticsProviderContext> _context;
	NSOrderedSet* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	WFHyperlinkFooterView* _linkFooterView;

}

@property (nonatomic,retain) id<WFDiagnosticsProviderContext> context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;              //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                  //@synthesize linkFooterView=_linkFooterView - In the implementation block
-(id<WFDiagnosticsProviderContext>)context;
-(void)setContext:(id<WFDiagnosticsProviderContext>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSOrderedSet *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)_refresh;
-(id)_defaultSections;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(WFHyperlinkFooterView *)linkFooterView;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(id)initWithDiagnosticsContext:(id)arg1 ;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
@end

