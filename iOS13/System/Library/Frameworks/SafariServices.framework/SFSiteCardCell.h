/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/_SFSiteCardModel.h>

@class UIImage, NSString, UIImageView, SFSiteCardSourceView, UILabel, UIView;

@interface SFSiteCardCell : UICollectionViewCell <_SFSiteCardModel> {

	UIImageView* _badgeView;
	UIImageView* _imageView;
	SFSiteCardSourceView* _sourceView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIView * contextMenuPreviewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * badge; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * source; 
@property (nonatomic,retain) UIImage * sourceIcon; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * title; 
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setBadge:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImage *)badge;
-(UIView *)contextMenuPreviewView;
-(void)setSourceIcon:(UIImage *)arg1 ;
-(UIImage *)sourceIcon;
@end

