/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray, NSArray;

@interface _MKResizingLayer : CALayer {

	NSMutableArray* _sizedLayers;
	BOOL _needsLayoutOnBoundsChange;

}

@property (assign,nonatomic) BOOL needsLayoutOnBoundsChange;                   //@synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sizeToBoundsLayers; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setMask:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)sizeSublayerToBounds:(id)arg1 ;
-(NSArray *)sizeToBoundsLayers;
-(BOOL)needsLayoutOnBoundsChange;
-(void)setNeedsLayoutOnBoundsChange:(BOOL)arg1 ;
@end

