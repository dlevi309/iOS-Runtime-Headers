/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPassLibrary, NSArray;

@interface SUScriptPassbookLibrary : SUScriptObject {

	PKPassLibrary* _passLibrary;

}

@property (readonly) NSArray * passes; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(NSArray *)passes;
-(id)scriptAttributeKeys;
@end

