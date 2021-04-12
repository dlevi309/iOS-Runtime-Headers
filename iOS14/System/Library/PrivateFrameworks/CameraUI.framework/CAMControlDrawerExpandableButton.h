/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMControlDrawerExpandableButton
@property (assign,nonatomic) UIEdgeInsets expansionInsets; 
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@required
-(void)setExpanded:(BOOL)arg1;
-(BOOL)isExpanded;
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setExpansionInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)expansionInsets;

@end

