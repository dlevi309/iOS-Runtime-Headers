/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>

@protocol DOCTagViewDelegate;
@class NUIContainerGridView, NSArray, UIButton, DOCVisualEffectLabel, DOCStackedThumbnailView, DOCTagsLineView, NSString;

@interface DOCShareHeaderView : NUIContainerStackView {

	NUIContainerGridView* _infoGrid;
	NSArray* _tags;
	UIButton* _addTagButton;
	id<DOCTagViewDelegate> _tagDelegate;
	DOCVisualEffectLabel* _displayNameLabel;
	DOCVisualEffectLabel* _providerNameLabel;
	DOCStackedThumbnailView* _thumbnailView;
	DOCTagsLineView* _tagsView;

}

@property (nonatomic,readonly) DOCVisualEffectLabel * displayNameLabel;               //@synthesize displayNameLabel=_displayNameLabel - In the implementation block
@property (nonatomic,readonly) DOCVisualEffectLabel * providerNameLabel;              //@synthesize providerNameLabel=_providerNameLabel - In the implementation block
@property (nonatomic,readonly) DOCStackedThumbnailView * thumbnailView;               //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) DOCTagsLineView * tagsView;                            //@synthesize tagsView=_tagsView - In the implementation block
@property (nonatomic,retain) NSArray * items; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * providerName; 
@property (nonatomic,retain) NSArray * tags;                                          //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) BOOL showAddTagButton; 
@property (nonatomic,readonly) UIButton * addTagButton;                               //@synthesize addTagButton=_addTagButton - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagViewDelegate> tagDelegate;               //@synthesize tagDelegate=_tagDelegate - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSArray *)tags;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(DOCStackedThumbnailView *)thumbnailView;
-(void)updateArrangedSubviews;
-(void)updateThumbnailSize;
-(DOCTagsLineView *)tagsView;
-(UIButton *)addTagButton;
-(BOOL)showAddTagButton;
-(DOCVisualEffectLabel *)displayNameLabel;
-(DOCVisualEffectLabel *)providerNameLabel;
-(void)setShowAddTagButton:(BOOL)arg1 ;
-(id<DOCTagViewDelegate>)tagDelegate;
-(void)setTagDelegate:(id<DOCTagViewDelegate>)arg1 ;
@end

