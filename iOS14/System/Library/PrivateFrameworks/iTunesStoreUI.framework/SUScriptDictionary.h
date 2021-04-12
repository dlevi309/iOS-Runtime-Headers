/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSDictionary;

@interface SUScriptDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _stringKeys;
	NSMutableDictionary* _cachedNestedScriptDictionaries;
	NSDictionary* _dictionary;

}

@property (readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(void)initialize;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)stringRepresentation;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)attributeKeys;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)valueForNotNativelySupportedKey:(id)arg1 ;
@end

