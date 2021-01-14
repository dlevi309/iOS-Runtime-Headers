/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contextMenuPreviewView;
-(UIImage *)icon;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)prepareForReuse;
-(void)setIconFromBookmark:(id)arg1 ;
-(void)updateConstraints;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

