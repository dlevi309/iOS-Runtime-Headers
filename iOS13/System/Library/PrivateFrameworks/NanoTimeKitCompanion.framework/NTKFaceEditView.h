/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKClockHardwareInput.h>

@protocol NTKFaceViewCustomEditing, NTKFaceEditViewDelegate;
@class UIViewController, NSString;

@interface NTKFaceEditView : UIView <NTKClockHardwareInput> {

	UIViewController*<NTKFaceViewCustomEditing> _editingContentViewController;
	id<NTKFaceEditViewDelegate> _delegate;
	long long _editMode;

}

@property (nonatomic,readonly) UIViewController*<NTKFaceViewCustomEditing> editingContentViewController;              //@synthesize editingContentViewController=_editingContentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NTKFaceEditViewDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long editMode;                                                                      //@synthesize editMode=_editMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NTKFaceEditViewDelegate>)delegate;
-(void)setDelegate:(id<NTKFaceEditViewDelegate>)arg1 ;
-(void)activate;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(long long)editMode;
-(void)setEditMode:(long long)arg1 ;
-(void)willActivate;
-(BOOL)isTransitioningBetweenEditPages;
-(id)initWithEditModes:(id)arg1 forDevice:(id)arg2 ;
-(void)setEditingContentViewController:(id)arg1 forEditMode:(long long)arg2 ;
-(void)addKeyline:(id)arg1 forKey:(id)arg2 tappable:(BOOL)arg3 editMode:(long long)arg4 ;
-(void)setLabelText:(id)arg1 forKey:(id)arg2 editMode:(long long)arg3 ;
-(void)setLabelAlignment:(unsigned long long)arg1 forKey:(id)arg2 editMode:(long long)arg3 ;
-(void)setLabelActiveAreaInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 editMode:(long long)arg3 ;
-(void)setSelectedKeylineFrame:(CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3 ;
-(void)setDeselectedKeylineFrame:(CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3 ;
-(void)selectKeylineForKey:(id)arg1 editMode:(long long)arg2 ;
-(void)setForEditMode:(long long)arg1 gestureDidScrollHandler:(/*^block*/id)arg2 ;
-(void)setForEditMode:(long long)arg1 gestureDidStopHandler:(/*^block*/id)arg2 ;
-(void)setInfoText:(id)arg1 forEditMode:(long long)arg2 ;
-(void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 animated:(BOOL)arg5 detentType:(unsigned long long)arg6 ;
-(UIViewController*<NTKFaceViewCustomEditing>)editingContentViewController;
-(void)removeAllKeylinesForEditMode:(long long)arg1 ;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)setBackgroundFillAlpha:(double)arg1 ;
-(CGPoint)pageOffsetFromCenter:(long long)arg1 ;
-(void)willDeactivate;
-(void)deactivateWithCompletion:(/*^block*/id)arg1 ;
-(void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 ;
-(void)setForEditMode:(long long)arg1 gestureDiscreteScrollHandler:(/*^block*/id)arg2 ;
@end

