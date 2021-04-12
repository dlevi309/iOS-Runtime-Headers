/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDisplayItem.h>

@class UILayoutGuide, NSArray;

@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem {

	UILayoutGuide* _layoutGuide;
	NSArray* _constraints;
	CGSize _size;

}

@property (nonatomic,retain) UILayoutGuide * layoutGuide;              //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                    //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(NSArray *)constraints;
-(void)setSize:(CGSize)arg1 ;
-(void)setContainerView:(id)arg1 ;
-(UILayoutGuide *)layoutGuide;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 item:(id)arg2 ;
-(void)applyUpdate:(id)arg1 ;
-(void)_applyConstraintsIfNeeded;
@end

