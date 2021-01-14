/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)indexPath;
-(void)setParent:(SKUISettingsGroupDescription *)arg1 ;
-(BOOL)_isHidden;
-(void)reloadData;
-(BOOL)allowsSelection;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginEditing;
-(SKUIViewElement *)viewElement;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
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
-(BOOL)_initiallyHidden;
-(void)_reloadSetting;
-(void)_revealSetting;
-(void)_setEditsValid:(BOOL)arg1 ;
@end

