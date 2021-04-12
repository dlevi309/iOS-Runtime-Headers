/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMask:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)sizeSublayerToBounds:(id)arg1 ;
-(NSArray *)sizeToBoundsLayers;
-(BOOL)needsLayoutOnBoundsChange;
-(void)setNeedsLayoutOnBoundsChange:(BOOL)arg1 ;
@end

