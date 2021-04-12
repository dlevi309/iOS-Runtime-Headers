/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIndexBarVisualStyle.h>

@class UIIndexBarView, NSString;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {

	UIIndexBarView* _indexBarView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView;              //@synthesize indexBarView=_indexBarView - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
-(BOOL)overlay;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithView:(id)arg1 ;
-(UIIndexBarView *)indexBarView;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1 ;
-(void)setIndexBarView:(UIIndexBarView *)arg1 ;
@end

