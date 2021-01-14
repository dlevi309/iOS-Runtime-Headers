/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSharedAssetCollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKSharedContentsCollectionViewCellDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer, NSString;

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _editing;
	UIImage* _previewImage;
	UIImageView* _checkmarkView;
	id<CKSharedContentsCollectionViewCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                                      //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                                 //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) id<CKSharedContentsCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                               //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)more:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(id<CKSharedContentsCollectionViewCellDelegate>)delegate;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setupTapGestureRecognizer;
-(void)toggleCheckmarkViewWithEnabled:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setDelegate:(id<CKSharedContentsCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)saveAttachment:(id)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)handleTap:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

