/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSSet;


@protocol _UILAPropertySource <NSObject>
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@required
-(long long)axis;
-(void)setAxis:(long long)arg1;
-(void)_invalidateBaselineConstraint:(id)arg1;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;
-(NSSet *)invalidBaselineConstraints;

@end

