/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(CFListFormatterRef)_listFormatter;
-(id)stringFromItems:(id)arg1 ;
-(NSFormatter *)itemFormatter;
-(void)setItemFormatter:(NSFormatter *)arg1 ;
@end

