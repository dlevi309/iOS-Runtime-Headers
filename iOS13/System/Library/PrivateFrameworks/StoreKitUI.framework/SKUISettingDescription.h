/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIViewElement, SKUISettingsGroupDescription;

@interface SKUISettingDescription : NSObject {

	SKUIViewElement* _viewElement;
	BOOL _editsValid;
	SKUISettingsGroupDescription* _parent;

}

@property (nonatomic,readonly) BOOL allowsSelection; 
@property (assign,nonatomic,__weak) SKUISettingsGroupDescription * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL editsValid; 
@property (nonatomic,retain) SKUIViewElement * viewElement;                             //@synthesize viewElement=_viewElement - In the implementation block
+(BOOL)allowsEdit;
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(Class)viewClassForSettingDescription:(id)arg1 ;
-(SKUISettingsGroupDescription *)parent;
-(void)beginEditing;
-(void)setParent:(SKUISettingsGroupDescription *)arg1 ;
-(id)indexPath;
-(BOOL)_isHidden;
-(void)reloadData;
-(BOOL)allowsSelection;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_initiallyHidden;
-(SKUIViewElement *)viewElement;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)cancelEdits;
-(BOOL)commitEdits:(/*^block*/id)arg1 ;
-(void)discardEdits;
-(BOOL)editsValid;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_deleteSetting;
-(void)_dispatchUpdate:(id)arg1 ;
-(void)_hideSetting;
-(void)_reloadSetting;
-(void)_revealSetting;
-(void)_setEditsValid:(BOOL)arg1 ;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
@end

