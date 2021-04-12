/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXForYouSuggestionGadgetDelegate, PXDisplaySuggestion, PXDisplayAsset;
@class PXGadgetSpec, PXUIMediaProvider, PXForYouSuggestionGadgetContentView, NSString, UIImage, PXRegionOfInterest;

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {

	BOOL _contentHidden;
	BOOL _blursDegradedContent;
	BOOL _shouldSuppressSelectionAnimation;
	BOOL _contentViewVisible;
	unsigned short _suggestionType;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXForYouSuggestionGadgetDelegate> _delegate;
	id<PXDisplaySuggestion> _suggestion;
	PXUIMediaProvider* _mediaProvider;
	id<PXDisplayAsset> _keyAsset;
	PXForYouSuggestionGadgetContentView* _contentView;
	NSString* _title;
	NSString* _subtitle;
	CGSize _cachedHeightForWidth;
	CGRect _visibleContentRect;

}

@property (nonatomic,retain) PXUIMediaProvider * mediaProvider;                                      //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) CGSize cachedHeightForWidth;                                            //@synthesize cachedHeightForWidth=_cachedHeightForWidth - In the implementation block
@property (nonatomic,retain) PXForYouSuggestionGadgetContentView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewVisible;                                                //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short suggestionType;                                          //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) id<PXDisplaySuggestion> suggestion;                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<PXForYouSuggestionGadgetDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                              //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) UIImage * currentImage; 
@property (assign,nonatomic) BOOL blursDegradedContent;                                              //@synthesize blursDegradedContent=_blursDegradedContent - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressSelectionAnimation;                                  //@synthesize shouldSuppressSelectionAnimation=_shouldSuppressSelectionAnimation - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * regionOfInterestForOneUpTransition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                              //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                              //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(id)fetchQueue;
+(void)preloadResources;
-(void)setMediaProvider:(PXUIMediaProvider *)arg1 ;
-(PXGadgetSpec *)gadgetSpec;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)contentViewDidDisappear;
-(unsigned long long)gadgetCapabilities;
-(PXUIMediaProvider *)mediaProvider;
-(unsigned long long)gadgetType;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)contentViewWillAppear;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXDisplayAsset>)keyAsset;
-(id)init;
-(id<PXForYouSuggestionGadgetDelegate>)delegate;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(id<PXDisplaySuggestion>)suggestion;
-(void)userDidSelectGadget;
-(void)contentHasBeenSeen;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)gadgetControllerHasAppeared;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(void)setDelegate:(id<PXForYouSuggestionGadgetDelegate>)arg1 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(id)debugDictionary;
-(CGRect)visibleContentRect;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)setSuggestionType:(unsigned short)arg1 ;
-(void)setContentView:(PXForYouSuggestionGadgetContentView *)arg1 ;
-(void)_handleDismiss;
-(void)_updateContentViewMode;
-(id)_contentViewIfLoaded;
-(void)_markSuggestionAsActive;
-(void)_markSuggestionAsDeclined;
-(void)_updateKeyAsset;
-(BOOL)shouldSuppressSelectionAnimation;
-(CGSize)cachedHeightForWidth;
-(void)setShouldSuppressSelectionAnimation:(BOOL)arg1 ;
-(void)setCachedHeightForWidth:(CGSize)arg1 ;
-(BOOL)contentViewVisible;
-(void)setBlursDegradedContent:(BOOL)arg1 ;
-(BOOL)blursDegradedContent;
-(id)initWithSuggestion:(id)arg1 ;
-(void)setSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)currentImage;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(PXForYouSuggestionGadgetContentView *)contentView;
-(void)_updateTitleAndSubtitle;
-(unsigned short)suggestionType;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(PXRegionOfInterest *)regionOfInterestForOneUpTransition;
-(BOOL)isContentHidden;
@end

