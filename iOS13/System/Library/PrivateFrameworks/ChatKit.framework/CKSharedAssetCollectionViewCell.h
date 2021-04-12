/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UILabel, NSString;

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell {

	UIView* _previewView;
	UILabel* _previewTitleLabel;
	NSString* _name;
	NSString* _url;
	UIView* _previewTitleContainerView;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) UIView * previewTitleContainerView;              //@synthesize previewTitleContainerView=_previewTitleContainerView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UILabel * previewTitleLabel;                     //@synthesize previewTitleLabel=_previewTitleLabel - In the implementation block
+(id)reuseIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(UILabel *)previewTitleLabel;
-(id)formattedTitleFromPreviewTitle:(id)arg1 ;
-(UIView *)previewTitleContainerView;
-(void)setPreviewTitleLabel:(UILabel *)arg1 ;
-(void)setPreviewTitleContainerView:(UIView *)arg1 ;
@end

