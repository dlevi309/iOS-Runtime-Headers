/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@class UIView, UIBarButtonItem;

@interface VUIDocumentUIConfigurationPopover : VUIDocumentUIConfigurationModal {

	BOOL _presentationAdjustedToSizeClass;
	unsigned long long _popOverArrowDirection;
	UIView* _sourceView;
	UIBarButtonItem* _popOverSourceBarButtonItem;
	CGSize _preferredSize;
	CGRect _sourceRect;

}

@property (assign,nonatomic) CGSize preferredSize;                                                                       //@synthesize preferredSize=_preferredSize - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                          //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) unsigned long long popOverArrowDirection;                                                   //@synthesize popOverArrowDirection=_popOverArrowDirection - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                                        //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * popOverSourceBarButtonItem;                                               //@synthesize popOverSourceBarButtonItem=_popOverSourceBarButtonItem - In the implementation block
@property (assign,getter=isPresentationAdjustedToSizeClass,nonatomic) BOOL presentationAdjustedToSizeClass;              //@synthesize presentationAdjustedToSizeClass=_presentationAdjustedToSizeClass - In the implementation block
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIBarButtonItem *)popOverSourceBarButtonItem;
-(unsigned long long)popOverArrowDirection;
-(void)setPopOverSourceBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setPopOverArrowDirection:(unsigned long long)arg1 ;
-(BOOL)isPresentationAdjustedToSizeClass;
-(void)setPresentationAdjustedToSizeClass:(BOOL)arg1 ;
@end

