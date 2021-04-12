/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptCanvasContext, WebScriptObject, UIImage, NSString;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {

	id _action;
	SUScriptCanvasContext* _canvas;
	BOOL _shouldPerformDefaultAction;
	WebScriptObject* _target;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL shouldPerformDefaultAction;              //@synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction - In the implementation block
@property (retain) id action; 
@property (retain) SUScriptCanvasContext * canvas; 
@property (assign) BOOL enabled; 
@property (assign) BOOL loading; 
@property (readonly) id showingConfirmation; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * style; 
@property (assign) long long tag; 
@property (retain) NSString * title; 
@property (retain) WebScriptObject * target; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTarget:(WebScriptObject *)arg1 ;
-(WebScriptObject *)target;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(id)action;
-(long long)tag;
-(id)_className;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)_action;
-(void)setAction:(id)arg1 ;
-(void)setTag:(long long)arg1 ;
-(UIEdgeInsets)imageEdgeInsets;
-(SUScriptCanvasContext *)canvas;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(id)attributeKeys;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(id)scriptAttributeKeys;
-(id)showingConfirmation;
-(id)buttonItem;
-(id)_initSUScriptButton;
-(id)initWithSystemItemString:(id)arg1 ;
-(id)_boxedNativeButton;
-(id)nativeButtonOfType:(int)arg1 ;
-(id)_nativeButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(void)setImageWithURLString:(id)arg1 scale:(id)arg2 ;
-(void)performActionWithArguments:(id)arg1 ;
-(void)setNativeButton:(id)arg1 ;
-(id)_systemItemString;
-(void)setShouldPerformDefaultAction:(BOOL)arg1 ;
@end

