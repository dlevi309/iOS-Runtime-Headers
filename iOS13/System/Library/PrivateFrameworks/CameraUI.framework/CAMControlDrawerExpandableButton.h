/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMControlDrawerExpandableButton
@property (assign,nonatomic) UIEdgeInsets expansionInsets; 
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@required
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setExpansionInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)expansionInsets;

@end

