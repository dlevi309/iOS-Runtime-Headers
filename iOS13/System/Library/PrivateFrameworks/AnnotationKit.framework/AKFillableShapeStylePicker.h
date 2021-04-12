/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

