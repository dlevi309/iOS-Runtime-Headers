/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFUIKitUserInterface;
@class NSString, NSSet, NSArray, WFVariable, NSIndexSet, WFAlert;

@interface WFTextTokenChooser : NSObject {

	BOOL _showsClearButton;
	BOOL _showsDoneButton;
	BOOL _prefersItemPickerSheetPresentation;
	NSString* _title;
	NSString* _message;
	NSString* _noChoicesMessage;
	NSSet* _allowedVariableTypes;
	NSArray* _additionalButtons;
	WFVariable* _selectedVariable;
	NSIndexSet* _selectedButtonIndexes;
	/*^block*/id _choiceHandler;
	/*^block*/id _cancelHandler;
	WFAlert* _presentedAlert;
	NSArray* _auxiliaryButtons;
	id<WFUIKitUserInterface> _userInterface;

}

@property (nonatomic,retain) WFAlert * presentedAlert;                                   //@synthesize presentedAlert=_presentedAlert - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryButtons;                                   //@synthesize auxiliaryButtons=_auxiliaryButtons - In the implementation block
@property (assign,nonatomic,__weak) id<WFUIKitUserInterface> userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * noChoicesMessage;                                  //@synthesize noChoicesMessage=_noChoicesMessage - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                 //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,copy) NSArray * additionalButtons;                                  //@synthesize additionalButtons=_additionalButtons - In the implementation block
@property (assign,nonatomic) BOOL showsClearButton;                                      //@synthesize showsClearButton=_showsClearButton - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                       //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL prefersItemPickerSheetPresentation;                    //@synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation - In the implementation block
@property (nonatomic,retain) WFVariable * selectedVariable;                              //@synthesize selectedVariable=_selectedVariable - In the implementation block
@property (nonatomic,retain) NSIndexSet * selectedButtonIndexes;                         //@synthesize selectedButtonIndexes=_selectedButtonIndexes - In the implementation block
@property (nonatomic,copy) id choiceHandler;                                             //@synthesize choiceHandler=_choiceHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                             //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setShowsClearButton:(BOOL)arg1 ;
-(BOOL)showsClearButton;
-(id<WFUIKitUserInterface>)userInterface;
-(void)setUserInterface:(id<WFUIKitUserInterface>)arg1 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)prefersItemPickerSheetPresentation;
-(void)setPrefersItemPickerSheetPresentation:(BOOL)arg1 ;
-(NSSet *)allowedVariableTypes;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)presentWithVariableProvider:(id)arg1 variableUIDelegate:(id)arg2 userInterface:(id)arg3 fromSource:(id)arg4 ;
-(void)setAdditionalButtons:(NSArray *)arg1 ;
-(void)setAuxiliaryButtons:(NSArray *)arg1 ;
-(void)updateButtonsInAlert:(id)arg1 ;
-(void)setSelectedButtonIndexes:(NSIndexSet *)arg1 ;
-(id)alertButtonForVariable:(id)arg1 selected:(BOOL)arg2 ;
-(NSString *)noChoicesMessage;
-(void)setNoChoicesMessage:(NSString *)arg1 ;
-(NSArray *)additionalButtons;
-(WFVariable *)selectedVariable;
-(void)setSelectedVariable:(WFVariable *)arg1 ;
-(NSIndexSet *)selectedButtonIndexes;
-(id)choiceHandler;
-(void)setChoiceHandler:(id)arg1 ;
-(WFAlert *)presentedAlert;
-(void)setPresentedAlert:(WFAlert *)arg1 ;
-(NSArray *)auxiliaryButtons;
@end

