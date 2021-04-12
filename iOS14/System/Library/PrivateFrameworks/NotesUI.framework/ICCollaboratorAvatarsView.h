/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CKShare, NSArray, UIStackView;

@interface ICCollaboratorAvatarsView : UIView {

	double _borderWidth;
	double _dimension;
	CKShare* _share;
	double _shadowOpacity;
	double _shadowRadius;
	double _spacing;
	NSArray* _avatarContainerViews;
	UIStackView* _avatarStackView;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSArray * avatarContainerViews;                         //@synthesize avatarContainerViews=_avatarContainerViews - In the implementation block
@property (nonatomic,retain) UIStackView * avatarStackView;                          //@synthesize avatarStackView=_avatarStackView - In the implementation block
@property (assign,nonatomic) double borderWidth;                                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double dimension;                                       //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic,__weak) CKShare * share;                                 //@synthesize share=_share - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                    //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                   //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                    //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double spacing;                                         //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedAvatarCount; 
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CKShare *)share;
-(double)dimension;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)shadowOpacity;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)commonInit;
-(void)updateUI;
-(double)borderWidth;
-(id)initWithCoder:(id)arg1 ;
-(void)setDimension:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setUpAvatarContainerViews;
-(void)updateShadows;
-(UIStackView *)avatarStackView;
-(id)createAvatarContainerView;
-(void)setAvatarContainerViews:(NSArray *)arg1 ;
-(NSArray *)avatarContainerViews;
-(void)setAvatarStackView:(UIStackView *)arg1 ;
-(unsigned long long)displayedAvatarCount;
@end

