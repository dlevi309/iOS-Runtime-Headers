/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUITableViewSectionDelegate;
@interface SKUITableViewSection : NSObject {

	id<SKUITableViewSectionDelegate> _delegate;
	BOOL _hidesHeaderView;
	long long _sectionIndex;

}

@property (assign,nonatomic,__weak) id<SKUITableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hidesHeaderView;                                          //@synthesize hidesHeaderView=_hidesHeaderView - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                        //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfRowsInSection; 
-(id<SKUITableViewSectionDelegate>)delegate;
-(void)setDelegate:(id<SKUITableViewSectionDelegate>)arg1 ;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(BOOL)hidesHeaderView;
-(void)setHidesHeaderView:(BOOL)arg1 ;
@end

