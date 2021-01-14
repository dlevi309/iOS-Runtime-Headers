/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)more:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageView *)irisBadgeView;
-(CGImageRef)_cgImageForUIImage:(id)arg1 ;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(NSObject*<CKAttachmentCellDelegate>)delegate;
-(UIImage *)iconImage;
-(CKAnimatedImage *)animatedImage;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(UIImage *)image;
-(void)setRepresentedObject:(CKAttachmentItem *)arg1 ;
-(void)setDelegate:(NSObject*<CKAttachmentCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(BOOL)isIrisAsset;
-(void)saveAttachment:(id)arg1 ;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)dealloc;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)updateAnimationTimerObserving;
-(CKAttachmentItem *)representedObject;
@end

