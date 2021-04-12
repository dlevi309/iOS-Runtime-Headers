/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIRingsRenderPipelineConfiguration : NSObject {

	BOOL _hasVisibleRings;
	BOOL _ringsAreEmpty;
	BOOL _needsAlphaReductionPass;
	BOOL _hasOverlappingRing;

}

@property (assign,nonatomic) BOOL hasVisibleRings;                      //@synthesize hasVisibleRings=_hasVisibleRings - In the implementation block
@property (assign,nonatomic) BOOL ringsAreEmpty;                        //@synthesize ringsAreEmpty=_ringsAreEmpty - In the implementation block
@property (assign,nonatomic) BOOL needsAlphaReductionPass;              //@synthesize needsAlphaReductionPass=_needsAlphaReductionPass - In the implementation block
@property (assign,nonatomic) BOOL hasOverlappingRing;                   //@synthesize hasOverlappingRing=_hasOverlappingRing - In the implementation block
-(BOOL)hasVisibleRings;
-(BOOL)ringsAreEmpty;
-(BOOL)hasOverlappingRing;
-(BOOL)needsAlphaReductionPass;
-(void)setHasVisibleRings:(BOOL)arg1 ;
-(void)setRingsAreEmpty:(BOOL)arg1 ;
-(void)setNeedsAlphaReductionPass:(BOOL)arg1 ;
-(void)setHasOverlappingRing:(BOOL)arg1 ;
@end

