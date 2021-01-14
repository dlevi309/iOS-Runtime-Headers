/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFieldEditorHostingViewRequirements;
@class UIView, UIFieldEditor;

@interface _UIFieldEditorHost : NSObject {

	UIView*<_UIFieldEditorHostingViewRequirements> _hostingView;
	UIFieldEditor* _hostedFieldEditor;

}

@property (nonatomic,__weak,readonly) UIView*<_UIFieldEditorHostingViewRequirements> hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,readonly) UIFieldEditor * hostedFieldEditor;                                              //@synthesize hostedFieldEditor=_hostedFieldEditor - In the implementation block
@property (getter=isHostingFieldEditor,nonatomic,readonly) BOOL hostingFieldEditor; 
+(id)fieldEditorHostForTextField:(id)arg1 ;
-(void)layoutIfNeeded;
-(id)description;
-(UIView*<_UIFieldEditorHostingViewRequirements>)hostingView;
-(void)addFieldEditor:(id)arg1 ;
-(id)initWithHostingView:(id)arg1 ;
-(BOOL)isHostingFieldEditor;
-(void)addPlaceholderLabel:(id)arg1 ;
-(id)_viewForHostingFieldEditor;
-(void)removeFieldEditor;
-(UIFieldEditor *)hostedFieldEditor;
@end

