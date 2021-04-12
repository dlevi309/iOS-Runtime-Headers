/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

@class NSArray;


@protocol DOCTagEditorPresenter <NSObject>
@property (assign,nonatomic) BOOL showAddTagConfirmButtons; 
@property (assign,nonatomic) BOOL useCompactColorPicker; 
@property (assign,nonatomic) BOOL pinTextFieldToTopBound; 
@property (assign,nonatomic) BOOL delayResizingUntilAppeared; 
@property (assign,nonatomic) BOOL isExtremelyVerticallyCompact; 
@property (assign,nonatomic,__weak) id<DOCTagEditorDelegate> delegate; 
@property (nonatomic,retain) NSArray * items; 
@required
-(id<DOCTagEditorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)items;
-(void)setItems:(id)arg1;
-(BOOL)delayResizingUntilAppeared;
-(BOOL)pinTextFieldToTopBound;
-(BOOL)showAddTagConfirmButtons;
-(BOOL)isExtremelyVerticallyCompact;
-(void)setShowAddTagConfirmButtons:(BOOL)arg1;
-(BOOL)useCompactColorPicker;
-(void)setUseCompactColorPicker:(BOOL)arg1;
-(void)setPinTextFieldToTopBound:(BOOL)arg1;
-(void)setDelayResizingUntilAppeared:(BOOL)arg1;
-(void)setIsExtremelyVerticallyCompact:(BOOL)arg1;

@end

