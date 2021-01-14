/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKModernToolbarPicker.h>

@interface AKLineStylePicker : AKModernToolbarPicker {

	unsigned long long _lineType;
	long long _lineStyle;

}

@property (readonly) unsigned long long lineType;              //@synthesize lineType=_lineType - In the implementation block
@property (readonly) long long lineStyle;                      //@synthesize lineStyle=_lineStyle - In the implementation block
-(unsigned long long)lineType;
-(long long)_shapeTagForType:(unsigned long long)arg1 ;
-(id)_buttonImagesForType:(unsigned long long)arg1 ;
-(void)_styleButtonPressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 lineType:(unsigned long long)arg2 controller:(id)arg3 ;
-(void)revalidateItems:(id)arg1 ;
-(long long)lineStyle;
@end

