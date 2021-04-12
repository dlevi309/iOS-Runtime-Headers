/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@protocol CKConversationSearchCellProtocol;
@class NSString, CALayer, UITableViewCell, CKSpotlightQueryResult;

@interface CKMessageSearchResultCell : UICollectionViewCell <CKSearchResultCell> {

	BOOL editing;
	NSString* _searchText;
	CALayer* _topHairline;
	CALayer* _bottomHairline;
	UITableViewCell*<CKConversationSearchCellProtocol> _searchCell;
	CKSpotlightQueryResult* _result;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UITableViewCell*<CKConversationSearchCellProtocol> searchCell;              //@synthesize searchCell=_searchCell - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) CALayer * topHairline;                                                      //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,retain) CALayer * bottomHairline;                                                   //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                        //@synthesize searchText=_searchText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(CKSpotlightQueryResult *)result;
-(void)prepareForReuse;
-(void)setResult:(CKSpotlightQueryResult *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(NSString *)searchText;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(UITableViewCell*<CKConversationSearchCellProtocol>)searchCell;
-(void)setSearchCell:(UITableViewCell*<CKConversationSearchCellProtocol>)arg1 ;
-(void)setTopHairline:(CALayer *)arg1 ;
-(void)setBottomHairline:(CALayer *)arg1 ;
-(CALayer *)topHairline;
-(CALayer *)bottomHairline;
@end

