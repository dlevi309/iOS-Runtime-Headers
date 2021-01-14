/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject {

	NSString* _domain;
	SSKeyValueStore* _keyValueStore;

}
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)_checkOutStoreWithDomain:(id)arg1 ;
+(void)_popStoreWithDomain:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)removeAllValues;
-(id)_className;
-(void)dealloc;
-(void)getValueForKey:(id)arg1 usingFunction:(id)arg2 ;
-(void)setValueForKey:(id)arg1 value:(id)arg2 ;
@end

