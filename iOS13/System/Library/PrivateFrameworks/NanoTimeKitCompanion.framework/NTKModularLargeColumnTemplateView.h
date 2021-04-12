/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView {

	BOOL _useNoColumnPadding;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_positionLeadingAlignedImageView:(id)arg1 label:(id)arg2 withBaselineOffset:(double)arg3 ;
-(void)_layoutRowsOfColumnsWithAlignment:(long long)arg1 ;
-(id)_newHeaderLabelSubview;
-(id)_newBodyLabelSubview;
@end

