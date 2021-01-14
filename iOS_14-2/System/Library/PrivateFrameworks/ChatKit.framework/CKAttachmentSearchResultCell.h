/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UILabel, UIDateLabel, NSString, CKSearchAvatarSupplementryView;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	BOOL _suppressAvatars;
	UILabel* _titleLabel;
	UIDateLabel* _dateLabel;
	NSString* _identifier;
	CKSearchAvatarSupplementryView* _avatarView;
	UIEdgeInsets marginInsets;

}

@property (assign,nonatomic) BOOL suppressAvatars;                                                      //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                                                   //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKSearchAvatarSupplementryView * avatarView;                               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CGPoint avatarOffsetLTR; 
@property (nonatomic,readonly) CGPoint avatarOffsetRTL; 
@property (nonatomic,readonly) double editModeHorizontalOffset; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIDateLabel *)dateLabel;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(CKSearchAvatarSupplementryView *)avatarView;
-(void)layoutSubviews;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)setAvatarView:(CKSearchAvatarSupplementryView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(NSString *)identifier;
-(BOOL)suppressAvatars;
-(double)editModeHorizontalOffset;
-(CGPoint)avatarOffsetLTR;
-(CGPoint)avatarOffsetRTL;
-(void)setSuppressAvatars:(BOOL)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
@end

