/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItems:(id)arg1;
-(id<DOCTagEditorDelegate>)delegate;
-(NSArray *)items;
-(void)setDelegate:(id)arg1;
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

