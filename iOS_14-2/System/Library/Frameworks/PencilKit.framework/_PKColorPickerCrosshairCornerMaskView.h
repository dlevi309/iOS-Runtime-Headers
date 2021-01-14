/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface _PKColorPickerCrosshairCornerMaskView : UIView {

	BOOL _excludeCorner;
	unsigned long long _cornerPosition;

}

@property (assign,nonatomic) unsigned long long cornerPosition;              //@synthesize cornerPosition=_cornerPosition - In the implementation block
@property (assign,nonatomic) BOOL excludeCorner;                             //@synthesize excludeCorner=_excludeCorner - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(id)maskPath;
-(id)_shapeLayer;
-(void)layoutSubviews;
-(void)_setPath:(id)arg1 ;
-(unsigned long long)cornerPosition;
-(BOOL)excludeCorner;
-(void)setCornerPosition:(unsigned long long)arg1 ;
-(void)setExcludeCorner:(BOOL)arg1 ;
@end

