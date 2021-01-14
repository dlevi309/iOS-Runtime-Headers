/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying> {

	BOOL __treatLeadingHiddenAsOverlaps;
	BOOL __treatTrailingHiddenAsOverlaps;
	BOOL __treatSupplementaryHiddenAsOverlaps;
	double _leadingWidth;
	double _leadingOffscreenWidth;
	double _trailingWidth;
	double _trailingOffscreenWidth;
	double _supplementaryWidth;
	double _supplementaryOffscreenWidth;
	long long _mainPositioning;
	double _detachedMainXOffset;
	double _mainWidth;
	double _leadingDragOffset;
	double _trailingDragOffset;
	double _supplementaryDragOffset;
	UISlidingBarConfiguration* _configuration;
	double __leadingOverlayWidth;
	double __trailingOverlayWidth;
	double __supplementaryOverlayWidth;
	double __rubberBandInset;
	double __keyboardAdjustment;
	long long __collapsedState;

}

@property (assign,nonatomic) double leadingWidth;                                                                                  //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;                                                                                 //@synthesize trailingWidth=_trailingWidth - In the implementation block
@property (assign,nonatomic) double supplementaryWidth;                                                                            //@synthesize supplementaryWidth=_supplementaryWidth - In the implementation block
@property (assign,nonatomic) double leadingOffscreenWidth;                                                                         //@synthesize leadingOffscreenWidth=_leadingOffscreenWidth - In the implementation block
@property (assign,nonatomic) double trailingOffscreenWidth;                                                                        //@synthesize trailingOffscreenWidth=_trailingOffscreenWidth - In the implementation block
@property (assign,nonatomic) double supplementaryOffscreenWidth;                                                                   //@synthesize supplementaryOffscreenWidth=_supplementaryOffscreenWidth - In the implementation block
@property (assign,nonatomic) double leadingDragOffset;                                                                             //@synthesize leadingDragOffset=_leadingDragOffset - In the implementation block
@property (assign,nonatomic) double trailingDragOffset;                                                                            //@synthesize trailingDragOffset=_trailingDragOffset - In the implementation block
@property (assign,nonatomic) double supplementaryDragOffset;                                                                       //@synthesize supplementaryDragOffset=_supplementaryDragOffset - In the implementation block
@property (assign,nonatomic) long long mainPositioning;                                                                            //@synthesize mainPositioning=_mainPositioning - In the implementation block
@property (assign,nonatomic) double detachedMainXOffset;                                                                           //@synthesize detachedMainXOffset=_detachedMainXOffset - In the implementation block
@property (assign,nonatomic) double mainWidth;                                                                                     //@synthesize mainWidth=_mainWidth - In the implementation block
@property (nonatomic,retain) UISlidingBarConfiguration * configuration;                                                            //@synthesize configuration=_configuration - In the implementation block
@property (assign,setter=_setLeadingOverlayWidth:,nonatomic) double _leadingOverlayWidth;                                          //@synthesize _leadingOverlayWidth=__leadingOverlayWidth - In the implementation block
@property (assign,setter=_setTreatLeadingHiddenAsOverlaps:,nonatomic) BOOL _treatLeadingHiddenAsOverlaps;                          //@synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps - In the implementation block
@property (assign,setter=_setTrailingOverlayWidth:,nonatomic) double _trailingOverlayWidth;                                        //@synthesize _trailingOverlayWidth=__trailingOverlayWidth - In the implementation block
@property (assign,setter=_setTreatTrailingHiddenAsOverlaps:,nonatomic) BOOL _treatTrailingHiddenAsOverlaps;                        //@synthesize _treatTrailingHiddenAsOverlaps=__treatTrailingHiddenAsOverlaps - In the implementation block
@property (assign,setter=_setSupplementaryOverlayWidth:,nonatomic) double _supplementaryOverlayWidth;                              //@synthesize _supplementaryOverlayWidth=__supplementaryOverlayWidth - In the implementation block
@property (assign,setter=_setTreatSupplementaryHiddenAsOverlaps:,nonatomic) BOOL _treatSupplementaryHiddenAsOverlaps;              //@synthesize _treatSupplementaryHiddenAsOverlaps=__treatSupplementaryHiddenAsOverlaps - In the implementation block
@property (assign,nonatomic) double _rubberBandInset;                                                                              //@synthesize _rubberBandInset=__rubberBandInset - In the implementation block
@property (assign,nonatomic) double _keyboardAdjustment;                                                                           //@synthesize _keyboardAdjustment=__keyboardAdjustment - In the implementation block
@property (assign,setter=_setCollapsedState:,nonatomic) long long _collapsedState;                                                 //@synthesize _collapsedState=__collapsedState - In the implementation block
@property (nonatomic,readonly) BOOL leadingOverlapsMain; 
@property (nonatomic,readonly) BOOL trailingOverlapsMain; 
@property (nonatomic,readonly) BOOL supplementaryOverlapsMain; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (nonatomic,readonly) BOOL isLeadingVisible; 
@property (nonatomic,readonly) BOOL isTrailingVisible; 
@property (nonatomic,readonly) BOOL isSupplementaryVisible; 
-(id)_configuration;
-(BOOL)isCollapsed;
-(void)setLeadingWidth:(double)arg1 ;
-(void)setTrailingDragOffset:(double)arg1 ;
-(BOOL)supplementaryOverlapsMain;
-(double)supplementaryDragOffset;
-(void)setTrailingOffscreenWidth:(double)arg1 ;
-(void)set_keyboardAdjustment:(double)arg1 ;
-(long long)_collapsedState;
-(double)_trailingOverlayWidth;
-(void)_setCollapsedState:(long long)arg1 ;
-(void)_setTrailingOverlayWidth:(double)arg1 ;
-(void)setMainWidth:(double)arg1 ;
-(double)_supplementaryOverlayWidth;
-(void)setLeadingOffscreenWidth:(double)arg1 ;
-(void)_setTreatSupplementaryHiddenAsOverlaps:(BOOL)arg1 ;
-(void)_setTreatLeadingHiddenAsOverlaps:(BOOL)arg1 ;
-(long long)mainPositioning;
-(void)setSupplementaryOffscreenWidth:(double)arg1 ;
-(void)_setTreatTrailingHiddenAsOverlaps:(BOOL)arg1 ;
-(void)set_rubberBandInset:(double)arg1 ;
-(double)supplementaryWidth;
-(BOOL)_shouldUseSlidingBars;
-(double)trailingOffscreenWidth;
-(BOOL)_treatLeadingHiddenAsOverlaps;
-(void)setDetachedMainXOffset:(double)arg1 ;
-(BOOL)_trailingEntirelyOverlapsMain;
-(double)trailingDragOffset;
-(void)setTrailingWidth:(double)arg1 ;
-(BOOL)isLeadingVisible;
-(BOOL)_leadingEntirelyOverlapsMain;
-(id)description;
-(void)_setLeadingOverlayWidth:(double)arg1 ;
-(void)setMainPositioning:(long long)arg1 ;
-(double)leadingWidth;
-(UISlidingBarConfiguration *)configuration;
-(double)_absoluteDistanceFromRequest:(id)arg1 ;
-(double)trailingWidth;
-(double)leadingOffscreenWidth;
-(BOOL)_treatSupplementaryHiddenAsOverlaps;
-(double)supplementaryOffscreenWidth;
-(double)mainWidth;
-(unsigned long long)hash;
-(id)stateRequest;
-(BOOL)matchesRequest:(id)arg1 ;
-(double)_leadingOverlayWidth;
-(BOOL)isSupplementaryVisible;
-(BOOL)leadingOverlapsMain;
-(void)setLeadingDragOffset:(double)arg1 ;
-(double)leadingDragOffset;
-(double)detachedMainXOffset;
-(void)_setSupplementaryOverlayWidth:(double)arg1 ;
-(void)setSupplementaryDragOffset:(double)arg1 ;
-(double)_rubberBandInset;
-(double)_distanceFromRequest:(id)arg1 ;
-(BOOL)_treatTrailingHiddenAsOverlaps;
-(id)_interactiveStateRequest;
-(BOOL)_supplementaryEntirelyOverlapsMain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupplementaryWidth:(double)arg1 ;
-(BOOL)isTrailingVisible;
-(BOOL)trailingOverlapsMain;
-(double)_keyboardAdjustment;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
@end

