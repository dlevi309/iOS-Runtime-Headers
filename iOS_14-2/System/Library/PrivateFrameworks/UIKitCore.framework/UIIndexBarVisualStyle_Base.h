/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIndexBarVisualStyle.h>

@class UIIndexBarView, NSString;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {

	UIIndexBarView* _indexBarView;

}

@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView;              //@synthesize indexBarView=_indexBarView - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(double)minLineHeight;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
-(BOOL)overlay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIIndexBarView *)indexBarView;
-(id)initWithView:(id)arg1 ;
-(void)setIndexBarView:(UIIndexBarView *)arg1 ;
-(id)displayEntryFromEntry:(id)arg1 ;
@end

