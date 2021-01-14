/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@protocol CKDetailsSearchResultsFooterCellDelegate;
@class NSString, UITableView, CALayer;

@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, CKSearchResultSupplementryCell> {

	id<CKDetailsSearchResultsFooterCellDelegate> _delegate;
	unsigned long long _sectionIndex;
	NSString* _sectionIdentifier;
	NSString* _title;
	UITableView* _tableView;
	CALayer* _topHairline;
	CALayer* _bottomHairline;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) CALayer * topHairline;                                              //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,retain) CALayer * bottomHairline;                                           //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (assign,nonatomic) id<CKDetailsSearchResultsFooterCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                    //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<CKDetailsSearchResultsFooterCellDelegate>)delegate;
-(UITableView *)tableView;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)setTopHairline:(CALayer *)arg1 ;
-(void)setDelegate:(id<CKDetailsSearchResultsFooterCellDelegate>)arg1 ;
-(void)setBottomHairline:(CALayer *)arg1 ;
-(void)layoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(CALayer *)topHairline;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CALayer *)bottomHairline;
-(NSString *)title;
@end

