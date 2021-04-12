/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageTranscriptCell.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKBalloonImageView, UIImage, CKAnimatedImage, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer, NSString;

@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver> {

	CKBalloonImageView* _imageView;
	UIImage* _image;
	CKAnimatedImage* _animatedImage;
	NSArray* _frames;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) CKBalloonImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSArray * frames;                                                         //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                                        //@synthesize animatedImage=_animatedImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)associatedStickerXOriginForStickerFrame:(CGRect)arg1 parentSize:(CGSize)arg2 contentAlignmentRect:(CGRect)arg3 orientation:(char)arg4 geometryDescriptor:(IMAssociatedMessageGeometryDescriptor)arg5 outBalloonOffset:(double*)arg6 ;
-(void)setImageView:(CKBalloonImageView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(CKBalloonImageView *)imageView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(CKAnimatedImage *)animatedImage;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)didMoveToWindow;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(void)dealloc;
-(void)updateAnimationTimerObserving;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(void)longPressGestureRecognized:(id)arg1 ;
@end

