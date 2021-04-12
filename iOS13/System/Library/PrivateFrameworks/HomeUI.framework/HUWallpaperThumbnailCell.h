/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<HUWallpaperThumbnailCellDelegate>)delegate;
-(void)setDelegate:(id<HUWallpaperThumbnailCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(CGSize)imageSize;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(long long)contentMode;
-(void)setImageSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
@end

