/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteColorSwatch.h>
#import <libobjc.A.dylib/PKPaletteMultiColorSwatchProperties.h>

@class NSString, PKSwatchColor;

@interface PKPaletteMulticolorSwatch : PKPaletteColorSwatch <PKPaletteMultiColorSwatchProperties>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsSelectionHighlight; 
@property (nonatomic,retain) PKSwatchColor * swatchColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)newColorBackgroundView;
-(BOOL)wantsBackgroundViewColor;
-(BOOL)wantsColorBulletVisible;
@end

