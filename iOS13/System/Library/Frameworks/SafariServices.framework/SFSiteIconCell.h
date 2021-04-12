/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/_SFSiteIconModel.h>

@class UIImage, NSString, UIView, _SFSiteIconView, UILabel;

@interface SFSiteIconCell : UICollectionViewCell <_SFSiteIconModel> {

	UIView* _iconDimmingView;
	_SFSiteIconView* _iconView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIView * contextMenuPreviewView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UIView *)contextMenuPreviewView;
-(void)setIconFromBookmark:(id)arg1 ;
@end

