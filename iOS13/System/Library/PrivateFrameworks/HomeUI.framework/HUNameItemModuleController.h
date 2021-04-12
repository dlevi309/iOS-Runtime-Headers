/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUNameAndIconEditorCellDelegate.h>
#import <libobjc.A.dylib/HUIconPickerViewControllerDelegate.h>

@class HUNameItemModule, HFNamingComponents, NSString;

@interface HUNameItemModuleController : HUItemTableModuleController <HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate> {

	BOOL _nameFieldHasClearButton;
	BOOL _showIcon;
	BOOL _shouldUseAccessoryName;
	HUNameItemModule* _nameModule;
	HFNamingComponents* _namingComponent;

}

@property (nonatomic,retain) HUNameItemModule * nameModule;                     //@synthesize nameModule=_nameModule - In the implementation block
@property (nonatomic,readonly) BOOL supportsCustomIconEditing; 
@property (nonatomic,retain) HFNamingComponents * namingComponent;              //@synthesize namingComponent=_namingComponent - In the implementation block
@property (assign,nonatomic) BOOL nameFieldHasClearButton;                      //@synthesize nameFieldHasClearButton=_nameFieldHasClearButton - In the implementation block
@property (assign,nonatomic) BOOL showIcon;                                     //@synthesize showIcon=_showIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAccessoryName;                       //@synthesize shouldUseAccessoryName=_shouldUseAccessoryName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
-(id)prepareForCommit;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(void)setNameModule:(HUNameItemModule *)arg1 ;
-(void)setNameFieldHasClearButton:(BOOL)arg1 ;
-(void)setShouldUseAccessoryName:(BOOL)arg1 ;
-(HUNameItemModule *)nameModule;
-(BOOL)supportsCustomIconEditing;
-(BOOL)nameFieldHasClearButton;
-(void)_setBuilderName:(id)arg1 ;
-(id)_builderName;
-(void)_cleanupTextFieldSetBuilderName;
-(BOOL)shouldUseAccessoryName;
-(void)nameAndIconEditorCellDidTapIcon:(id)arg1 ;
-(void)iconPickerDidCancel:(id)arg1 ;
-(void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2 ;
-(id)initWithModule:(id)arg1 host:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)cancelNameEdit;
@end

