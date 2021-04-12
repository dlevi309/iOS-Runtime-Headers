/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextInputAssistantItem.h>

@protocol UISystemDefaultTextInputAssistantItemDelegate;
@class NSArray;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem {

	BOOL _systemItem;
	id<UISystemDefaultTextInputAssistantItemDelegate> _delegate;
	NSArray* _defaultSystemLeadingBarButtonGroups;
	NSArray* _defaultSystemTrailingBarButtonGroups;

}

@property (assign,getter=_isSystemItem,nonatomic) BOOL systemItem;                                           //@synthesize systemItem=_systemItem - In the implementation block
@property (nonatomic,retain) NSArray * defaultSystemLeadingBarButtonGroups;                                  //@synthesize defaultSystemLeadingBarButtonGroups=_defaultSystemLeadingBarButtonGroups - In the implementation block
@property (nonatomic,retain) NSArray * defaultSystemTrailingBarButtonGroups;                                 //@synthesize defaultSystemTrailingBarButtonGroups=_defaultSystemTrailingBarButtonGroups - In the implementation block
@property (assign,nonatomic,__weak) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)assistantRedo;
-(void)_updateIsSystemItem;
-(id)init;
-(id<UISystemDefaultTextInputAssistantItemDelegate>)delegate;
-(void)assistantBold;
-(void)setDefaultSystemTrailingBarButtonGroups:(NSArray *)arg1 ;
-(BOOL)_isSystemItem;
-(void)assistantCut;
-(void)assistantDictation;
-(void)setDelegate:(id<UISystemDefaultTextInputAssistantItemDelegate>)arg1 ;
-(void)assistantShowKeyboard;
-(void)performSystemButtonActionForStyle:(long long)arg1 ;
-(void)assistantDismiss;
-(void)assistantWriteboard;
-(NSArray *)defaultSystemLeadingBarButtonGroups;
-(void)setLeadingBarButtonGroups:(id)arg1 ;
-(void)analyticsDispatchWithActionStyle:(long long)arg1 ;
-(void)assistantPaste;
-(void)assistantEmoji;
-(NSArray *)defaultSystemTrailingBarButtonGroups;
-(void)assistantItalic;
-(void)setTrailingBarButtonGroups:(id)arg1 ;
-(BOOL)canPerformSystemButtonActionForStyle:(long long)arg1 ;
-(void)assistantUndo;
-(void)assistantCopy;
-(void)setSystemItem:(BOOL)arg1 ;
-(void)setDefaultSystemLeadingBarButtonGroups:(NSArray *)arg1 ;
-(SEL)_responderSelectorForSystemButtonStyle:(long long)arg1 ;
-(void)assistantUnderline;
@end

