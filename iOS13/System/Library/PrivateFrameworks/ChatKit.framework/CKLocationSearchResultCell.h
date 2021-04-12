/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UIImageView, UILabel, UIVisualEffectView, CKSpotlightQueryResult, NSString;

@interface CKLocationSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	UIImageView* _imageView;
	UILabel* _placeLabel;
	UIVisualEffectView* _blurEffectView;
	CKSpotlightQueryResult* _result;
	NSString* _searchText;
	unsigned long long _mode;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * placeLabel;                             //@synthesize placeLabel=_placeLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurEffectView;              //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * searchText;                            //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                          //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(CKSpotlightQueryResult *)result;
-(unsigned long long)mode;
-(void)prepareForReuse;
-(void)setResult:(CKSpotlightQueryResult *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(NSString *)searchText;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
-(void)setBlurEffectView:(UIVisualEffectView *)arg1 ;
-(void)setPlaceLabel:(UILabel *)arg1 ;
-(UILabel *)placeLabel;
-(UIVisualEffectView *)blurEffectView;
-(void)_configurePlaceLabelWithResult:(id)arg1 searchText:(id)arg2 ;
@end

