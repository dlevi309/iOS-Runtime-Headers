/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface UIInputSwitcherTableCellBackgroundView : UIView {

	BOOL _selected;
	BOOL _drawsOpaque;
	BOOL _drawsBorder;
	BOOL _usesDarkTheme;
	unsigned long long _roundedCorners;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL drawsOpaque;                               //@synthesize drawsOpaque=_drawsOpaque - In the implementation block
@property (assign,nonatomic) BOOL drawsBorder;                               //@synthesize drawsBorder=_drawsBorder - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                             //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
-(BOOL)usesDarkTheme;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)drawsOpaque;
-(void)setDrawsBorder:(BOOL)arg1 ;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(unsigned long long)roundedCorners;
-(void)setDrawsOpaque:(BOOL)arg1 ;
-(BOOL)drawsBorder;
@end

