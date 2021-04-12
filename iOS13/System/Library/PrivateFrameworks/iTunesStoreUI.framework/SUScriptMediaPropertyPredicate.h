/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {

	NSString* _comparisonType;
	NSString* _property;
	id _value;

}

@property (nonatomic,readonly) MPMediaPropertyPredicate * nativePredicate; 
@property (readonly) NSString * comparisonType; 
@property (readonly) NSString * property; 
@property (readonly) id value; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)value;
-(id)_className;
-(id)attributeKeys;
-(NSString *)property;
-(NSString *)comparisonType;
-(id)scriptAttributeKeys;
-(MPMediaPropertyPredicate *)nativePredicate;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(id)_playlistAttributesForScriptArray:(id)arg1 ;
@end

