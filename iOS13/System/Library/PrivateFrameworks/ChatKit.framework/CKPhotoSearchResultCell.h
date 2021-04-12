/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UIImage, UIImageView, NSString, UILabel;

@interface CKPhotoSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _livePhotoImage;
	NSString* _identifier;
	UILabel* _durationLabel;
	UIImageView* _durationGradientImage;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * livePhotoImage;                     //@synthesize livePhotoImage=_livePhotoImage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                          //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) UIImageView * durationGradientImage;              //@synthesize durationGradientImage=_durationGradientImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(UILabel *)durationLabel;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
-(void)_livePhotoUpdated:(id)arg1 ;
-(void)_videoDurationUpdated:(id)arg1 ;
-(UIImageView *)livePhotoImage;
-(UIImageView *)durationGradientImage;
-(void)setLivePhotoImage:(UIImageView *)arg1 ;
-(void)_configureDurationLabelForResult:(id)arg1 ;
-(void)setDurationGradientImage:(UIImageView *)arg1 ;
@end

