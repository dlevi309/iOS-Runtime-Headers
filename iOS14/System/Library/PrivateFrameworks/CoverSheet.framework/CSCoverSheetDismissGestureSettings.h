/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetDismissGestureSettings : PTSettings {

	BOOL _usesGrapeFlags;
	BOOL _extendSwipeUpRegion;
	double _edgeRegionSize;
	double _recognizeAlongEdge;
	double _extendedEdgeRegionSize;
	double _extendedRegionInsetX;

}

@property (assign,nonatomic) BOOL usesGrapeFlags;                        //@synthesize usesGrapeFlags=_usesGrapeFlags - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                      //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double recognizeAlongEdge;                  //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (assign,nonatomic) BOOL extendSwipeUpRegion;                   //@synthesize extendSwipeUpRegion=_extendSwipeUpRegion - In the implementation block
@property (assign,nonatomic) double extendedEdgeRegionSize;              //@synthesize extendedEdgeRegionSize=_extendedEdgeRegionSize - In the implementation block
@property (assign,nonatomic) double extendedRegionInsetX;                //@synthesize extendedRegionInsetX=_extendedRegionInsetX - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setExtendedEdgeRegionSize:(double)arg1 ;
-(void)setExtendedRegionInsetX:(double)arg1 ;
-(double)recognizeAlongEdge;
-(double)extendedEdgeRegionSize;
-(void)setExtendSwipeUpRegion:(BOOL)arg1 ;
-(BOOL)usesGrapeFlags;
-(double)edgeRegionSize;
-(void)setUsesGrapeFlags:(BOOL)arg1 ;
-(BOOL)extendSwipeUpRegion;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setRecognizeAlongEdge:(double)arg1 ;
-(double)extendedRegionInsetX;
@end

