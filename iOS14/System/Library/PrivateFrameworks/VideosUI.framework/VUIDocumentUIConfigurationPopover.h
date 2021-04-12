/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSourceView:(UIView *)arg1 ;
-(CGSize)preferredSize;
-(UIView *)sourceView;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(void)setPreferredSize:(CGSize)arg1 ;
-(unsigned long long)popOverArrowDirection;
-(BOOL)isPresentationAdjustedToSizeClass;
-(void)setPopOverArrowDirection:(unsigned long long)arg1 ;
-(void)setPresentationAdjustedToSizeClass:(BOOL)arg1 ;
-(UIBarButtonItem *)popOverSourceBarButtonItem;
-(void)setPopOverSourceBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

