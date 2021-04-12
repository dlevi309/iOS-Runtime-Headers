/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont, UIColor, WFVariable, NSString, WFVariableAttachmentCell;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying> {

	BOOL _enabled;
	BOOL _selected;
	BOOL _highlighted;
	UIFont* _font;
	UIColor* _tintColor;
	WFVariable* _variable;
	NSString* _overrideVariableName;
	WFVariableAttachmentCell* _wf_attachmentCell;

}

@property (nonatomic,retain) WFVariableAttachmentCell * wf_attachmentCell;              //@synthesize wf_attachmentCell=_wf_attachmentCell - In the implementation block
@property (nonatomic,readonly) WFVariable * variable;                                   //@synthesize variable=_variable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                           //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                     //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIFont * font;                                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * overrideVariableName;                             //@synthesize overrideVariableName=_overrideVariableName - In the implementation block
-(id)accessibilityLabel;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)description;
-(id)attachmentCell;
-(BOOL)isHighlighted;
-(id)initWithVariable:(id)arg1 ;
-(BOOL)isEnabled;
-(WFVariable *)variable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(void)dealloc;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)variableDidChange:(id)arg1 ;
-(void)setOverrideVariableName:(NSString *)arg1 ;
-(NSString *)overrideVariableName;
-(WFVariableAttachmentCell *)wf_attachmentCell;
-(void)setWf_attachmentCell:(WFVariableAttachmentCell *)arg1 ;
@end

