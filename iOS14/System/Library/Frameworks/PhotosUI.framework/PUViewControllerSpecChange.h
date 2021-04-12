/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUViewControllerSpecChange : NSObject {

	BOOL _traitCollectionChanged;
	BOOL _layoutReferenceSizeChanged;
	BOOL _layoutStyleChanged;
	BOOL _presentedForSecondScreenChanged;
	BOOL _secondScreenSizeChanged;
	BOOL _prefersCompactLayoutForSplitScreenChanged;

}

@property (nonatomic,readonly) BOOL changed; 
@property (assign,nonatomic) BOOL traitCollectionChanged;                                 //@synthesize traitCollectionChanged=_traitCollectionChanged - In the implementation block
@property (assign,nonatomic) BOOL layoutReferenceSizeChanged;                             //@synthesize layoutReferenceSizeChanged=_layoutReferenceSizeChanged - In the implementation block
@property (assign,nonatomic) BOOL layoutStyleChanged;                                     //@synthesize layoutStyleChanged=_layoutStyleChanged - In the implementation block
@property (assign,nonatomic) BOOL presentedForSecondScreenChanged;                        //@synthesize presentedForSecondScreenChanged=_presentedForSecondScreenChanged - In the implementation block
@property (assign,nonatomic) BOOL secondScreenSizeChanged;                                //@synthesize secondScreenSizeChanged=_secondScreenSizeChanged - In the implementation block
@property (assign,nonatomic) BOOL prefersCompactLayoutForSplitScreenChanged;              //@synthesize prefersCompactLayoutForSplitScreenChanged=_prefersCompactLayoutForSplitScreenChanged - In the implementation block
-(BOOL)traitCollectionChanged;
-(BOOL)changed;
-(BOOL)layoutStyleChanged;
-(void)setLayoutStyleChanged:(BOOL)arg1 ;
-(void)setTraitCollectionChanged:(BOOL)arg1 ;
-(BOOL)layoutReferenceSizeChanged;
-(void)setLayoutReferenceSizeChanged:(BOOL)arg1 ;
-(BOOL)presentedForSecondScreenChanged;
-(void)setPresentedForSecondScreenChanged:(BOOL)arg1 ;
-(BOOL)secondScreenSizeChanged;
-(void)setSecondScreenSizeChanged:(BOOL)arg1 ;
-(BOOL)prefersCompactLayoutForSplitScreenChanged;
-(void)setPrefersCompactLayoutForSplitScreenChanged:(BOOL)arg1 ;
@end

