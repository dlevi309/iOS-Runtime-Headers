/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface MKAttributionLabel : UIView {

	NSAttributedString* _strokeText;
	NSAttributedString* _innerText;
	unsigned long long _mapType;
	BOOL _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(void)_updateTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_prepareLabel;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_attributesWithStroke:(BOOL)arg1 ;
@end

