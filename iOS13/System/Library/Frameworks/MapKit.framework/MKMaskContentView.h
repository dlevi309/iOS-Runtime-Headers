/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface MKMaskContentView : UIView {

	double _headerAlpha;
	double _headerHeight;
	double _headerOffset;

}

@property (assign,nonatomic) double headerAlpha;               //@synthesize headerAlpha=_headerAlpha - In the implementation block
@property (assign,nonatomic) double headerHeight;              //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double headerOffset;              //@synthesize headerOffset=_headerOffset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setHeaderAlpha:(double)arg1 ;
-(void)setHeaderOffset:(double)arg1 ;
-(double)headerAlpha;
-(double)headerOffset;
@end

