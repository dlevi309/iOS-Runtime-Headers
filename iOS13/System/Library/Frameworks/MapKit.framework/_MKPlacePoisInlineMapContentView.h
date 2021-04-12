/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(double)mapViewHeight;
-(BOOL)useImageView;
-(void)setLocationsNumber:(unsigned long long)arg1 ;
@end

