/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLayoutFillsCanvas:(BOOL)arg1;
-(NSSet *)invalidBaselineConstraints;
-(void)setAxis:(long long)arg1;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(NSSet *)_newlyHiddenItems;
-(void)_invalidateBaselineConstraint:(id)arg1;
-(NSSet *)_newlyUnhiddenItems;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1;
-(long long)axis;
-(BOOL)layoutFillsCanvas;

@end

