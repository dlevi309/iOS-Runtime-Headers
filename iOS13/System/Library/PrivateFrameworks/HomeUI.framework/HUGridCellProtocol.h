/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HUGridCellLayoutOptions;


@protocol HUGridCellProtocol <NSObject,HUCellProtocol>
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden; 
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions; 
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@optional
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1;

@required
+(Class)layoutOptionsClass;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(id)arg1;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1;

@end

