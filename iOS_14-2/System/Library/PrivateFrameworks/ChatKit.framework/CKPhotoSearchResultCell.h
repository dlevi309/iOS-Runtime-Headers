/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UIImage, UIImageView, NSString, UILabel;

@interface CKPhotoSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	BOOL _isLivePhoto;
	BOOL _isVideo;
	UIImage* _image;
	UIImageView* _livePhotoImage;
	NSString* _identifier;
	UILabel* _durationLabel;
	UIImageView* _durationGradientImage;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UIImageView * livePhotoImage;                                              //@synthesize livePhotoImage=_livePhotoImage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                                                   //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) UIImageView * durationGradientImage;                                       //@synthesize durationGradientImage=_durationGradientImage - In the implementation block
@property (assign,nonatomic) BOOL isLivePhoto;                                                          //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                              //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setImage:(UIImage *)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(BOOL)isLivePhoto;
-(void)setIsLivePhoto:(BOOL)arg1 ;
-(UIImageView *)livePhotoImage;
-(void)_livePhotoUpdated:(id)arg1 ;
-(void)_videoDurationUpdated:(id)arg1 ;
-(UIImageView *)durationGradientImage;
-(void)setLivePhotoImage:(UIImageView *)arg1 ;
-(void)_configureDurationLabelForResult:(id)arg1 ;
-(void)setDurationGradientImage:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(NSString *)identifier;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(UILabel *)durationLabel;
-(void)dealloc;
@end

