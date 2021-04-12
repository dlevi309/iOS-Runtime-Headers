/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)property;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(id)attributeKeys;
-(NSString *)comparisonType;
-(id)_className;
-(id)value;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(MPMediaPropertyPredicate *)nativePredicate;
-(id)_playlistAttributesForScriptArray:(id)arg1 ;
@end

