/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUTI:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)dismissMenuAnimated:(id)arg1 ;
-(NSString *)UTI;
-(id)_className;
-(void)dealloc;
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

