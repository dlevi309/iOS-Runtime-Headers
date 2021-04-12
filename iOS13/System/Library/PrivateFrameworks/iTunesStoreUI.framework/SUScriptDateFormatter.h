/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject {

	NSDateFormatter* _dateFormatter;

}

@property (copy) NSString * dateFormat; 
@property (assign) unsigned long long dateStyle; 
@property (copy) NSString * localeIdentifier; 
@property (assign) unsigned long long timeStyle; 
@property (readonly) unsigned long long dateFormatterFullStyle; 
@property (readonly) unsigned long long dateFormatterLongStyle; 
@property (readonly) unsigned long long dateFormatterMediumStyle; 
@property (readonly) unsigned long long dateFormatterNoStyle; 
@property (readonly) unsigned long long dateFormatterShortStyle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)localeIdentifier;
-(unsigned long long)dateStyle;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(unsigned long long)timeStyle;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(NSString *)dateFormat;
-(id)stringFromDate:(id)arg1 ;
-(double)dateFromString:(id)arg1 ;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(unsigned long long)dateFormatterFullStyle;
-(unsigned long long)dateFormatterLongStyle;
-(unsigned long long)dateFormatterMediumStyle;
-(unsigned long long)dateFormatterNoStyle;
-(unsigned long long)dateFormatterShortStyle;
@end

