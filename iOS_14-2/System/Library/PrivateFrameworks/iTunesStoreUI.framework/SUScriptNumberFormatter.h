/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)localeIdentifier;
-(id)init;
-(id)attributeKeys;
-(id)stringFromNumber:(id)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)style;
-(void)dealloc;
-(id)scriptAttributeKeys;
@end

