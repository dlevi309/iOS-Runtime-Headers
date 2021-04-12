/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIVisualEffectViewParticipating;
@class NSMutableArray, UIView, NSArray;

@interface _UIVisualEffectDescriptor : NSObject {

	NSMutableArray* _filterEntries;
	NSMutableArray* _viewEffects;
	NSMutableArray* _underlays;
	NSMutableArray* _overlays;
	BOOL _textShouldRenderWithTintColor;
	BOOL _allowsVibrancyInContent;
	BOOL _disableInPlaceFiltering;
	BOOL _requestAlphaTransition;
	UIView*<_UIVisualEffectViewParticipating> _identityContainerView;
	UIView*<_UIVisualEffectViewParticipating> _requestedContainerView;
	long long _alphaTransition;

}

@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> _identityContainerView;               //@synthesize identityContainerView=_identityContainerView - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> _requestedContainerView;              //@synthesize requestedContainerView=_requestedContainerView - In the implementation block
@property (assign,nonatomic) long long alphaTransition;                                                      //@synthesize alphaTransition=_alphaTransition - In the implementation block
@property (nonatomic,copy) NSArray * filterEntries;                                                          //@synthesize filterEntries=_filterEntries - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                            //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containerView; 
@property (nonatomic,copy) NSArray * underlays;                                                              //@synthesize underlays=_underlays - In the implementation block
@property (nonatomic,copy) NSArray * overlays;                                                               //@synthesize overlays=_overlays - In the implementation block
@property (assign,nonatomic) BOOL textShouldRenderWithTintColor;                                             //@synthesize textShouldRenderWithTintColor=_textShouldRenderWithTintColor - In the implementation block
@property (assign,nonatomic) BOOL allowsVibrancyInContent;                                                   //@synthesize allowsVibrancyInContent=_allowsVibrancyInContent - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;                                                   //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
@property (assign,nonatomic) BOOL requestAlphaTransition;                                                    //@synthesize requestAlphaTransition=_requestAlphaTransition - In the implementation block
+(id)newTransitionDescriptorForStops:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)setContainerView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(UIView*<_UIVisualEffectViewParticipating>)_identityContainerView;
-(void)set_identityContainerView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)setAlphaTransition:(long long)arg1 ;
-(id)init;
-(void)setAllowsVibrancyInContent:(BOOL)arg1 ;
-(NSArray *)overlays;
-(void)set_requestedContainerView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)addFilterEntry:(id)arg1 ;
-(void)setFilterEntries:(NSArray *)arg1 ;
-(BOOL)allowsVibrancyInContent;
-(BOOL)textShouldRenderWithTintColor;
-(void)setRequestAlphaTransition:(BOOL)arg1 ;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(id)description;
-(void)setUnderlays:(NSArray *)arg1 ;
-(UIView*<_UIVisualEffectViewParticipating>)containerView;
-(long long)alphaTransition;
-(BOOL)disableInPlaceFiltering;
-(NSArray *)underlays;
-(BOOL)requestAlphaTransition;
-(void)uniqueFilterNames;
-(void)setViewEffects:(NSArray *)arg1 ;
-(void)addViewEffect:(id)arg1 ;
-(NSArray *)filterEntries;
-(void)setOverlays:(NSArray *)arg1 ;
-(void)setTextShouldRenderWithTintColor:(BOOL)arg1 ;
-(UIView*<_UIVisualEffectViewParticipating>)_requestedContainerView;
-(id)copyForTransitionToDescriptor:(id)arg1 ;
-(NSArray *)viewEffects;
-(void)addUnderlay:(id)arg1 ;
@end

