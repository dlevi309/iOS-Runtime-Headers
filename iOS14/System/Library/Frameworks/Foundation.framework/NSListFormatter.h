/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSFormatter;

@interface NSListFormatter : NSFormatter {

	CFListFormatterRef _listFormatter;
	NSLocale* _locale;
	NSFormatter* _itemFormatter;

}

@property (copy) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (copy) NSFormatter * itemFormatter;              //@synthesize itemFormatter=_itemFormatter - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSFormatter *)itemFormatter;
-(CFListFormatterRef)_listFormatter;
-(void)setItemFormatter:(NSFormatter *)arg1 ;
-(id)stringFromItems:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(void)dealloc;
@end

