/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UILabel, UIVisualEffectView, CKSpotlightQueryResult, NSString;

@interface CKLocationSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	UILabel* _placeLabel;
	UIVisualEffectView* _blurEffectView;
	CKSpotlightQueryResult* _result;
	NSString* _searchText;
	unsigned long long _mode;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UILabel * placeLabel;                                                      //@synthesize placeLabel=_placeLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurEffectView;                                       //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * result;                                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setResult:(CKSpotlightQueryResult *)arg1 ;
-(unsigned long long)mode;
-(void)_thumbnailGenerated:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setBlurEffectView:(UIVisualEffectView *)arg1 ;
-(void)setPlaceLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(void)_configurePlaceLabelWithResult:(id)arg1 searchText:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)searchText;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(CKSpotlightQueryResult *)result;
-(void)setSearchText:(NSString *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(UILabel *)placeLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

