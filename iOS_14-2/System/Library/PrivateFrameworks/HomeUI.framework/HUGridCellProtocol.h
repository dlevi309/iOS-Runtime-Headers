/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HUGridCellLayoutOptions;


@protocol HUGridCellProtocol <NSObject,HUCellProtocol>
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden; 
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions; 
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@optional
-(BOOL)isPointerInteractionEnabled;
-(void)setPointerInteractionEnabled:(BOOL)arg1;
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1;
-(double)pointerRegionMargin;
-(void)setPointerRegionMargin:(double)arg1;

@required
+(Class)layoutOptionsClass;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(id)arg1;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1;

@end

