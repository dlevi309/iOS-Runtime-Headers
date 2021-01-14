/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)previewTitleLabel;
-(id)formattedTitleFromPreviewTitle:(id)arg1 ;
-(UIView *)previewView;
-(UIView *)previewTitleContainerView;
-(void)setPreviewTitleLabel:(UILabel *)arg1 ;
-(void)setPreviewTitleContainerView:(UIView *)arg1 ;
-(NSString *)url;
-(double)cornerRadius;
-(NSString *)name;
-(void)layoutSubviews;
-(void)setUrl:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setPreviewView:(UIView *)arg1 ;
@end

