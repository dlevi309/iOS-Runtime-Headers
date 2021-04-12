/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(NSArray *)passes;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
@end

