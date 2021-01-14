/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localeIdentifier;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(id)init;
-(double)dateFromString:(id)arg1 ;
-(NSString *)dateFormat;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(id)attributeKeys;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)_className;
-(id)stringFromDate:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(unsigned long long)dateFormatterFullStyle;
-(unsigned long long)dateFormatterLongStyle;
-(unsigned long long)dateFormatterMediumStyle;
-(unsigned long long)dateFormatterNoStyle;
-(unsigned long long)dateFormatterShortStyle;
@end

