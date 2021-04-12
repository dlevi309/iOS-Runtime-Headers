/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@interface SKUIViewElementHorizontalLayout : NSObject {

	double _elementSpacing;
	double _layoutWidth;
	long long _maximumElementsPerLine;
	long long _maximumLines;

}

@property (assign,nonatomic) double elementSpacing;                         //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (assign,nonatomic) double layoutWidth;                            //@synthesize layoutWidth=_layoutWidth - In the implementation block
@property (assign,nonatomic) long long maximumElementsPerLine;              //@synthesize maximumElementsPerLine=_maximumElementsPerLine - In the implementation block
@property (assign,nonatomic) long long maximumLines;                        //@synthesize maximumLines=_maximumLines - In the implementation block
-(long long)maximumLines;
-(void)setMaximumLines:(long long)arg1 ;
-(double)layoutWidth;
-(void)setElementSpacing:(double)arg1 ;
-(void)setLayoutWidth:(double)arg1 ;
-(id)layoutViewElements:(id)arg1 usingSizingBlock:(/*^block*/id)arg2 ;
-(double)elementSpacing;
-(void)setMaximumElementsPerLine:(long long)arg1 ;
-(long long)maximumElementsPerLine;
@end

