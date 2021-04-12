/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIKeyInput.h>

@class DOMHTMLSelectElement, NSArray, UIWebSelectPopover, NSString, UITextInputPasswordRules;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {

	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	NSArray* _groupsAndOptions;
	unsigned long long _singleSelectionIndex;
	unsigned long long _singleSelectionSection;
	BOOL _allowsMultipleSelection;
	double _fontSize;
	double _maximumTextWidth;
	long long _textAlignment;
	UIWebSelectPopover* _popover;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;                      //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) NSArray * _groupsAndOptions;                                //@synthesize groupsAndOptions=_groupsAndOptions - In the implementation block
@property (nonatomic,retain) NSArray * _cachedItems;                                     //@synthesize cachedItems=_cachedItems - In the implementation block
@property (assign,nonatomic) UIWebSelectPopover * _popover;                              //@synthesize popover=_popover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
-(void)dealloc;
-(BOOL)_isEmpty;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)hasText;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_cachedItems:(NSArray *)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(NSArray *)_cachedItems;
-(void)set_groupsAndOptions:(NSArray *)arg1 ;
-(void)_setupGroupsAndOptions;
-(id)_optionsForSection:(long long)arg1 ;
-(id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(BOOL)arg4 ;
-(NSArray *)_groupsAndOptions;
-(UIWebSelectPopover *)_popover;
-(void)set_popover:(UIWebSelectPopover *)arg1 ;
@end

