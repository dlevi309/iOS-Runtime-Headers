/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class UITraitCollection, NSHashTable, PUViewControllerSpecChange;

@interface PUViewControllerSpec : NSObject {

	BOOL _presentedForSecondScreen;
	BOOL _prefersCompactLayoutForSplitScreen;
	BOOL __needsUpdateLayoutStyle;
	UITraitCollection* _traitCollection;
	NSHashTable* __changeObservers;
	long long __changeCount;
	long long _currentLayoutStyle;
	PUViewControllerSpecChange* _currentChange;
	CGSize _layoutReferenceSize;
	CGSize _secondScreenSize;

}

@property (nonatomic,readonly) NSHashTable * _changeObservers;                                             //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (assign,setter=_setChangeCount:,nonatomic) long long _changeCount;                               //@synthesize _changeCount=__changeCount - In the implementation block
@property (assign,setter=_setNeedsUpdateLayoutStyle:,nonatomic) BOOL _needsUpdateLayoutStyle;              //@synthesize _needsUpdateLayoutStyle=__needsUpdateLayoutStyle - In the implementation block
@property (nonatomic,readonly) long long currentLayoutStyle;                                               //@synthesize currentLayoutStyle=_currentLayoutStyle - In the implementation block
@property (nonatomic,readonly) PUViewControllerSpecChange * currentChange;                                 //@synthesize currentChange=_currentChange - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,retain) UITraitCollection * traitCollection;                                          //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) CGSize layoutReferenceSize;                                                   //@synthesize layoutReferenceSize=_layoutReferenceSize - In the implementation block
@property (assign,getter=isPresentedForSecondScreen,nonatomic) BOOL presentedForSecondScreen;              //@synthesize presentedForSecondScreen=_presentedForSecondScreen - In the implementation block
@property (assign,nonatomic) CGSize secondScreenSize;                                                      //@synthesize secondScreenSize=_secondScreenSize - In the implementation block
@property (assign,nonatomic) BOOL prefersCompactLayoutForSplitScreen;                                      //@synthesize prefersCompactLayoutForSplitScreen=_prefersCompactLayoutForSplitScreen - In the implementation block
-(CGSize)_portraitOrientedSizeForSize:(CGSize)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(PUViewControllerSpecChange *)currentChange;
-(UITraitCollection *)traitCollection;
-(void)_setChangeCount:(long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)init;
-(BOOL)isPresentedForSecondScreen;
-(void)setPrefersCompactLayoutForSplitScreen:(BOOL)arg1 ;
-(void)setPresentedForSecondScreen:(BOOL)arg1 ;
-(void)_publishChange:(id)arg1 ;
-(long long)_changeCount;
-(long long)currentLayoutStyle;
-(CGSize)secondScreenSize;
-(void)setLayoutReferenceSize:(CGSize)arg1 ;
-(CGSize)layoutReferenceSize;
-(NSHashTable *)_changeObservers;
-(void)updateIfNeeded;
-(BOOL)isValid;
-(void)assertInsideChangesBlock;
-(id)newSpecChange;
-(void)setSecondScreenSize:(CGSize)arg1 ;
-(void)_setCurrentChange:(id)arg1 ;
-(void)_willChange;
-(void)_didChange;
-(void)_invalidateLayoutStyle;
-(void)_setCurrentLayoutStyle:(long long)arg1 ;
-(void)_updateCurrentLayoutStyleIfNeeded;
-(BOOL)prefersCompactLayoutForSplitScreen;
-(BOOL)_needsUpdateLayoutStyle;
-(void)_setNeedsUpdateLayoutStyle:(BOOL)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

