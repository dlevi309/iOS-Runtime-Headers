/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIDropInteractionDelegate.h>

@protocol HUWallpaperThumbnailCellDelegate;
@class UIImageView, NSLayoutConstraint, UIDropInteraction, UIImage, NSString;

@interface HUWallpaperThumbnailCell : UITableViewCell <UIDropInteractionDelegate> {

	long long _contentMode;
	id<HUWallpaperThumbnailCellDelegate> _delegate;
	UIImageView* _imageThumbnailView;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	UIDropInteraction* _dropInteraction;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImageView * imageThumbnailView;                                  //@synthesize imageThumbnailView=_imageThumbnailView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                         //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;                        //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                               //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                             //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperThumbnailCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(CGSize)imageSize;
-(UIDropInteraction *)dropInteraction;
-(long long)contentMode;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id<HUWallpaperThumbnailCellDelegate>)delegate;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setDelegate:(id<HUWallpaperThumbnailCellDelegate>)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

