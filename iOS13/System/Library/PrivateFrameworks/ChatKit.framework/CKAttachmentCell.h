/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKAttachmentCellDelegate;
@class UIImage, CKAnimatedImage, UIImageView, NSObject, CKAttachmentItem, NSArray, UITapGestureRecognizer, NSString;

@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {

	BOOL _editing;
	BOOL _isIrisAsset;
	UIImage* _image;
	CKAnimatedImage* _animatedImage;
	UIImageView* _checkmarkView;
	NSObject*<CKAttachmentCellDelegate> _delegate;
	CKAttachmentItem* _representedObject;
	NSArray* _frames;
	UITapGestureRecognizer* _tapRecognizer;
	UIImageView* _irisBadgeView;

}

@property (nonatomic,copy) NSArray * frames;                                                   //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                           //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIImageView * irisBadgeView;                                      //@synthesize irisBadgeView=_irisBadgeView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                                  //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKAttachmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * representedObject;                             //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                    //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                                                 //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<CKAttachmentCellDelegate>)delegate;
-(void)setDelegate:(NSObject*<CKAttachmentCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)copy:(id)arg1 ;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(CKAttachmentItem *)representedObject;
-(void)setRepresentedObject:(CKAttachmentItem *)arg1 ;
-(void)delete:(id)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIImage *)iconImage;
-(void)tapGestureRecognized:(id)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(BOOL)isIrisAsset;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)updateAnimationTimerObserving;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageView *)irisBadgeView;
-(CGImageRef)_cgImageForUIImage:(id)arg1 ;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
@end

