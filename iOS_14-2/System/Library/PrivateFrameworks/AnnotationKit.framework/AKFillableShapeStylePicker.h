/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKFillableShapeStylePicker : AKModernToolbarPicker {

	NSArray* _buttons;
	BOOL _showFill;

}

@property (assign,nonatomic) BOOL showFill;              //@synthesize showFill=_showFill - In the implementation block
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(void)_styleButtonPressed:(id)arg1 ;
-(void)revalidateItems:(id)arg1 ;
-(void)_updateImagesForAnnotationType:(id)arg1 ;
-(void)setShowFill:(BOOL)arg1 ;
-(BOOL)showFill;
@end

