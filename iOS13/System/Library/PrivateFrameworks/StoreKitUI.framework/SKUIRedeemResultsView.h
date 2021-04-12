/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol SKUIRedeemResultsViewDelegate;
@class NSArray, NSString;

@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _sections;
	UIEdgeInsets _contentInsetAdjustments;
	id<SKUIRedeemResultsViewDelegate> _resultsDelegate;

}

@property (nonatomic,retain) NSArray * sections;                                                    //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemResultsViewDelegate> resultsDelegate;              //@synthesize resultsDelegate=_resultsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layoutSubviews;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<SKUIRedeemResultsViewDelegate>)resultsDelegate;
-(void)setResultsDelegate:(id<SKUIRedeemResultsViewDelegate>)arg1 ;
@end

