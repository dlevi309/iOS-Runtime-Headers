/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIImage * badge; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * source; 
@property (nonatomic,retain) UIImage * sourceIcon; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contextMenuPreviewView;
-(void)setSourceIcon:(UIImage *)arg1 ;
-(void)setBadge:(UIImage *)arg1 ;
-(UIImage *)badge;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setSource:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)sourceIcon;
-(NSString *)title;
-(NSString *)source;
-(void)setHighlighted:(BOOL)arg1 ;
@end

