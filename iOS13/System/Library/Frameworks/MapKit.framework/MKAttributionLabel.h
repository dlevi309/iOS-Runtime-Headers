/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(void)_updateTextColor;
-(void)_prepareLabel;
-(id)_attributesWithStroke:(BOOL)arg1 ;
@end

