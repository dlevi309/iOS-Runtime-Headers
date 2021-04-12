/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptFunction, WebScriptObject, NSString;

@interface SUScriptDocumentInteractionController : SUScriptObject {

	SUScriptFunction* _cancelFunction;
	SUScriptFunction* _openWithFunction;

}

@property (retain) WebScriptObject * cancelFunction; 
@property (retain) WebScriptObject * openWithFunction; 
@property (copy) NSString * UTI; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(NSString *)UTI;
-(id)attributeKeys;
-(void)setUTI:(NSString *)arg1 ;
-(void)dismissMenuAnimated:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_nativeObject;
-(id)_nativeDocumentInteractionController;
-(void)showOpenWithMenuFromDOMElement:(id)arg1 ;
-(void)showOpenWithMenuFromNavigationItem:(id)arg1 ;
-(WebScriptObject *)cancelFunction;
-(WebScriptObject *)openWithFunction;
-(void)setCancelFunction:(WebScriptObject *)arg1 ;
-(void)setOpenWithFunction:(WebScriptObject *)arg1 ;
-(id)_cancelFunction;
-(id)_openWithFunction;
@end

