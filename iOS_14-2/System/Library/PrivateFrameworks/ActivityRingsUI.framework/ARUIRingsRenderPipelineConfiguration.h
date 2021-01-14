/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@interface ARUIRingsRenderPipelineConfiguration : NSObject {

	BOOL _hasVisibleRings;
	BOOL _hasEmptyRing;
	BOOL _hasFilledRing;
	BOOL _needsAlphaReductionPass;
	BOOL _hasOverlappingRing;

}

@property (assign,nonatomic) BOOL hasVisibleRings;                      //@synthesize hasVisibleRings=_hasVisibleRings - In the implementation block
@property (assign,nonatomic) BOOL hasEmptyRing;                         //@synthesize hasEmptyRing=_hasEmptyRing - In the implementation block
@property (assign,nonatomic) BOOL hasFilledRing;                        //@synthesize hasFilledRing=_hasFilledRing - In the implementation block
@property (assign,nonatomic) BOOL needsAlphaReductionPass;              //@synthesize needsAlphaReductionPass=_needsAlphaReductionPass - In the implementation block
@property (assign,nonatomic) BOOL hasOverlappingRing;                   //@synthesize hasOverlappingRing=_hasOverlappingRing - In the implementation block
-(BOOL)hasVisibleRings;
-(void)setHasVisibleRings:(BOOL)arg1 ;
-(BOOL)hasEmptyRing;
-(void)setHasEmptyRing:(BOOL)arg1 ;
-(BOOL)hasFilledRing;
-(void)setHasFilledRing:(BOOL)arg1 ;
-(BOOL)needsAlphaReductionPass;
-(void)setNeedsAlphaReductionPass:(BOOL)arg1 ;
-(BOOL)hasOverlappingRing;
-(void)setHasOverlappingRing:(BOOL)arg1 ;
@end

