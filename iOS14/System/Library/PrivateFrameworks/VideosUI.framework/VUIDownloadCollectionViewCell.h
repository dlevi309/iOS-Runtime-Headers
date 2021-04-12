/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryLockupViewCell.h>
#import <libobjc.A.dylib/VUIDownloadEntityDelegate.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@protocol VUIDownloadCollectionViewCellDelegate;
@class VUILabel, UIImageView, VUIDownloadEntity, VUIDownloadButton, NSString;

@interface VUIDownloadCollectionViewCell : VUILibraryLockupViewCell <VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate> {

	BOOL _editing;
	id<VUIDownloadCollectionViewCellDelegate> _delegate;
	VUILabel* _metaDataHeaderFirstLabel;
	VUILabel* _metaDataHeaderSecondLabel;
	VUILabel* _dotSeparatorLabel;
	UIImageView* _editImageView;
	VUIDownloadEntity* _downloadEntity;
	unsigned long long _previousDownloadState;
	VUIDownloadButton* _downloadButton;

}

@property (nonatomic,retain) VUILabel * metaDataHeaderFirstLabel;                                    //@synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel - In the implementation block
@property (nonatomic,retain) VUILabel * metaDataHeaderSecondLabel;                                   //@synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                           //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * editImageView;                                            //@synthesize editImageView=_editImageView - In the implementation block
@property (nonatomic,retain) VUIDownloadEntity * downloadEntity;                                     //@synthesize downloadEntity=_downloadEntity - In the implementation block
@property (assign,nonatomic) unsigned long long previousDownloadState;                               //@synthesize previousDownloadState=_previousDownloadState - In the implementation block
@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                     //@synthesize downloadButton=_downloadButton - In the implementation block
@property (assign,nonatomic,__weak) id<VUIDownloadCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                           //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1 ;
+(void)configureVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 width:(double)arg3 forMetrics:(BOOL)arg4 ;
+(void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 ;
+(void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<VUIDownloadCollectionViewCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<VUIDownloadCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(VUIDownloadButton *)downloadButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)_addDownloadButtonIfRequired:(id)arg1 ;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
-(void)setDownloadEntity:(VUIDownloadEntity *)arg1 ;
-(void)_addMetaDataLabelsIfRequired:(id)arg1 ;
-(void)setMetaDataHeaderFirstLabel:(VUILabel *)arg1 ;
-(void)setMetaDataHeaderSecondLabel:(VUILabel *)arg1 ;
-(VUIDownloadEntity *)downloadEntity;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)_configureViewElementsForAX;
-(CGSize)_layoutForCompact:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUILabel *)metaDataHeaderFirstLabel;
-(VUILabel *)metaDataHeaderSecondLabel;
-(unsigned long long)previousDownloadState;
-(void)setPreviousDownloadState:(unsigned long long)arg1 ;
-(void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2 ;
-(void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2 ;
-(void)_updateViewForEditState;
-(void)setEditImageView:(UIImageView *)arg1 ;
-(CGSize)_layoutForAccessibility:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(UIImageView *)editImageView;
-(BOOL)_hasSecondaryLabel;
@end

