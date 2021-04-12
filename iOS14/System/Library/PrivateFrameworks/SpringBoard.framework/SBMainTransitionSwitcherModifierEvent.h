/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@class NSMutableDictionary, SBAppLayout, NSString, SBBannerUnfurlSourceContext, NSSet, NSArray;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent {

	NSMutableDictionary* _appLayoutToRemovalContext;
	BOOL _fromAppLayoutWantsExclusiveForeground;
	BOOL _toAppLayoutWantsExclusiveForeground;
	BOOL _fromFloatingSwitcherVisible;
	BOOL _toFloatingSwitcherVisible;
	BOOL _prefersCrossfadeTransition;
	BOOL _gestureInitiated;
	BOOL _dragAndDropTransition;
	BOOL _breadcrumbTransition;
	BOOL _inlineAppExposeTransition;
	BOOL _morphToPiPTransition;
	BOOL _morphFromPiPTransition;
	BOOL _continuityTransition;
	BOOL _bannerUnfurlTransition;
	BOOL _iconZoomDisabled;
	BOOL _spotlightTransition;
	SBAppLayout* _fromFloatingAppLayout;
	long long _fromFloatingConfiguration;
	SBAppLayout* _toFloatingAppLayout;
	long long _toFloatingConfiguration;
	NSString* _fromAppExposeBundleID;
	NSString* _toAppExposeBundleID;
	unsigned long long _fromInlineAppExposeRoles;
	unsigned long long _toInlineAppExposeRoles;
	SBBannerUnfurlSourceContext* _bannerUnfurlSourceContext;
	NSSet* _fromAppLayoutsPendingTermination;

}

@property (assign,nonatomic) BOOL fromAppLayoutWantsExclusiveForeground;                                     //@synthesize fromAppLayoutWantsExclusiveForeground=_fromAppLayoutWantsExclusiveForeground - In the implementation block
@property (assign,nonatomic) BOOL toAppLayoutWantsExclusiveForeground;                                       //@synthesize toAppLayoutWantsExclusiveForeground=_toAppLayoutWantsExclusiveForeground - In the implementation block
@property (nonatomic,retain) SBAppLayout * fromFloatingAppLayout;                                            //@synthesize fromFloatingAppLayout=_fromFloatingAppLayout - In the implementation block
@property (assign,nonatomic) long long fromFloatingConfiguration;                                            //@synthesize fromFloatingConfiguration=_fromFloatingConfiguration - In the implementation block
@property (assign,nonatomic) BOOL fromFloatingSwitcherVisible;                                               //@synthesize fromFloatingSwitcherVisible=_fromFloatingSwitcherVisible - In the implementation block
@property (nonatomic,retain) SBAppLayout * toFloatingAppLayout;                                              //@synthesize toFloatingAppLayout=_toFloatingAppLayout - In the implementation block
@property (assign,nonatomic) long long toFloatingConfiguration;                                              //@synthesize toFloatingConfiguration=_toFloatingConfiguration - In the implementation block
@property (assign,nonatomic) BOOL toFloatingSwitcherVisible;                                                 //@synthesize toFloatingSwitcherVisible=_toFloatingSwitcherVisible - In the implementation block
@property (nonatomic,copy) NSString * fromAppExposeBundleID;                                                 //@synthesize fromAppExposeBundleID=_fromAppExposeBundleID - In the implementation block
@property (nonatomic,copy) NSString * toAppExposeBundleID;                                                   //@synthesize toAppExposeBundleID=_toAppExposeBundleID - In the implementation block
@property (assign,nonatomic) unsigned long long fromInlineAppExposeRoles;                                    //@synthesize fromInlineAppExposeRoles=_fromInlineAppExposeRoles - In the implementation block
@property (assign,nonatomic) unsigned long long toInlineAppExposeRoles;                                      //@synthesize toInlineAppExposeRoles=_toInlineAppExposeRoles - In the implementation block
@property (nonatomic,copy) SBBannerUnfurlSourceContext * bannerUnfurlSourceContext;                          //@synthesize bannerUnfurlSourceContext=_bannerUnfurlSourceContext - In the implementation block
@property (assign,nonatomic) BOOL prefersCrossfadeTransition;                                                //@synthesize prefersCrossfadeTransition=_prefersCrossfadeTransition - In the implementation block
@property (nonatomic,copy) NSSet * fromAppLayoutsPendingTermination;                                         //@synthesize fromAppLayoutsPendingTermination=_fromAppLayoutsPendingTermination - In the implementation block
@property (assign,getter=isGestureInitiated,nonatomic) BOOL gestureInitiated;                                //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
@property (assign,getter=isDragAndDropTransition,nonatomic) BOOL dragAndDropTransition;                      //@synthesize dragAndDropTransition=_dragAndDropTransition - In the implementation block
@property (assign,getter=isBreadcrumbTransition,nonatomic) BOOL breadcrumbTransition;                        //@synthesize breadcrumbTransition=_breadcrumbTransition - In the implementation block
@property (assign,getter=isInlineAppExposeTransition,nonatomic) BOOL inlineAppExposeTransition;              //@synthesize inlineAppExposeTransition=_inlineAppExposeTransition - In the implementation block
@property (assign,getter=isMorphToPiPTransition,nonatomic) BOOL morphToPiPTransition;                        //@synthesize morphToPiPTransition=_morphToPiPTransition - In the implementation block
@property (assign,getter=isMorphFromPiPTransition,nonatomic) BOOL morphFromPiPTransition;                    //@synthesize morphFromPiPTransition=_morphFromPiPTransition - In the implementation block
@property (assign,getter=isContinuityTransition,nonatomic) BOOL continuityTransition;                        //@synthesize continuityTransition=_continuityTransition - In the implementation block
@property (assign,getter=isBannerUnfurlTransition,nonatomic) BOOL bannerUnfurlTransition;                    //@synthesize bannerUnfurlTransition=_bannerUnfurlTransition - In the implementation block
@property (assign,getter=isIconZoomDisabled,nonatomic) BOOL iconZoomDisabled;                                //@synthesize iconZoomDisabled=_iconZoomDisabled - In the implementation block
@property (assign,getter=isSpotlightTransition,nonatomic) BOOL spotlightTransition;                          //@synthesize spotlightTransition=_spotlightTransition - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appLayoutsWithRemovalContexts; 
-(void)setFromFloatingConfiguration:(long long)arg1 ;
-(BOOL)prefersCrossfadeTransition;
-(BOOL)isInlineAppExposeTransition;
-(id)removalContextForAppLayout:(id)arg1 ;
-(void)setPrefersCrossfadeTransition:(BOOL)arg1 ;
-(SBAppLayout *)toFloatingAppLayout;
-(void)setContinuityTransition:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)fromFloatingConfiguration;
-(BOOL)isBreadcrumbTransition;
-(void)setFromFloatingAppLayout:(SBAppLayout *)arg1 ;
-(NSString *)toAppExposeBundleID;
-(unsigned long long)fromInlineAppExposeRoles;
-(void)setIconZoomDisabled:(BOOL)arg1 ;
-(BOOL)isSpotlightTransition;
-(void)setToFloatingConfiguration:(long long)arg1 ;
-(BOOL)isIconZoomDisabled;
-(void)setInlineAppExposeTransition:(BOOL)arg1 ;
-(NSString *)fromAppExposeBundleID;
-(BOOL)isBannerUnfurlTransition;
-(void)setBannerUnfurlSourceContext:(SBBannerUnfurlSourceContext *)arg1 ;
-(NSSet *)fromAppLayoutsPendingTermination;
-(long long)toFloatingConfiguration;
-(BOOL)isContinuityTransition;
-(BOOL)isMorphFromPiPTransition;
-(BOOL)isDragAndDropTransition;
-(SBAppLayout *)fromFloatingAppLayout;
-(void)setDragAndDropTransition:(BOOL)arg1 ;
-(void)setBannerUnfurlTransition:(BOOL)arg1 ;
-(BOOL)isGestureInitiated;
-(void)setSpotlightTransition:(BOOL)arg1 ;
-(NSArray *)appLayoutsWithRemovalContexts;
-(void)setToAppLayoutWantsExclusiveForeground:(BOOL)arg1 ;
-(void)setFromFloatingSwitcherVisible:(BOOL)arg1 ;
-(void)setFromAppLayoutsPendingTermination:(NSSet *)arg1 ;
-(long long)type;
-(unsigned long long)toInlineAppExposeRoles;
-(SBBannerUnfurlSourceContext *)bannerUnfurlSourceContext;
-(void)setFromAppLayoutWantsExclusiveForeground:(BOOL)arg1 ;
-(void)setToAppExposeBundleID:(NSString *)arg1 ;
-(void)setFromInlineAppExposeRoles:(unsigned long long)arg1 ;
-(void)setGestureInitiated:(BOOL)arg1 ;
-(void)setMorphFromPiPTransition:(BOOL)arg1 ;
-(void)setRemovalContext:(id)arg1 forAppLayout:(id)arg2 ;
-(BOOL)fromFloatingSwitcherVisible;
-(void)setToFloatingAppLayout:(SBAppLayout *)arg1 ;
-(void)setBreadcrumbTransition:(BOOL)arg1 ;
-(BOOL)fromAppLayoutWantsExclusiveForeground;
-(void)setFromAppExposeBundleID:(NSString *)arg1 ;
-(BOOL)toFloatingSwitcherVisible;
-(void)setToInlineAppExposeRoles:(unsigned long long)arg1 ;
-(BOOL)toAppLayoutWantsExclusiveForeground;
-(void)setToFloatingSwitcherVisible:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMorphToPiPTransition:(BOOL)arg1 ;
-(BOOL)isMorphToPiPTransition;
@end

