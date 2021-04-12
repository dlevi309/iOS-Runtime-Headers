/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView {

	CPImageSet* _imageSet;

}

@property (nonatomic,retain) CPImageSet * imageSet;              //@synthesize imageSet=_imageSet - In the implementation block
+(CGPathRef)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
+(id)balloonWithText:(id)arg1 traitCollection:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForDisplay;
-(void)_configure;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)update;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(id)_defaultPOI;
@end

