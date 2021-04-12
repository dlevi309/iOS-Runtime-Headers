/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {

	_MKUILabel* _storesLabel;
	_MKUILabel* _seeMoreLabel;
	BOOL _visible;

}

@property (assign,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(double)mapViewHeight;
-(BOOL)useImageView;
-(void)setLocationsNumber:(unsigned long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
@end

