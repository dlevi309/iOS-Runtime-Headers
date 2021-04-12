/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKConversationSearchCellDelegate.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@protocol CKMessageSearchResultCellDelegate, CKConversationSearchCellProtocol;
@class NSString, CALayer, UITableViewCell, CKSpotlightQueryResult;

@interface CKMessageSearchResultCell : UICollectionViewCell <CKConversationSearchCellDelegate, CKSearchResultCell> {

	BOOL _ck_editing;
	NSString* _searchText;
	CALayer* _topHairline;
	CALayer* _bottomHairline;
	id<CKMessageSearchResultCellDelegate> _delegate;
	UITableViewCell*<CKConversationSearchCellProtocol> _searchCell;
	CKSpotlightQueryResult* _result;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UITableViewCell*<CKConversationSearchCellProtocol> searchCell;              //@synthesize searchCell=_searchCell - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                        //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) CALayer * topHairline;                                                    //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,readonly) CALayer * bottomHairline;                                                 //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessageSearchResultCellDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;               //@synthesize ck_editing=_ck_editing - In the implementation block
+(id)reuseIdentifier;
-(void)setResult:(CKSpotlightQueryResult *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKMessageSearchResultCellDelegate>)delegate;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<CKMessageSearchResultCellDelegate>)arg1 ;
-(UITableViewCell*<CKConversationSearchCellProtocol>)searchCell;
-(void)layoutSubviews;
-(NSString *)searchText;
-(BOOL)_ck_isEditing;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(CKSpotlightQueryResult *)result;
-(id)configurationState;
-(void)setSearchText:(NSString *)arg1 ;
-(CALayer *)topHairline;
-(UIEdgeInsets)marginInsets;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(void)setSearchCell:(UITableViewCell*<CKConversationSearchCellProtocol>)arg1 ;
-(CALayer *)bottomHairline;
-(void)forwardStateToEmbeddedCell:(unsigned long long)arg1 ;
-(unsigned long long)_viewConfigurationState;
@end

