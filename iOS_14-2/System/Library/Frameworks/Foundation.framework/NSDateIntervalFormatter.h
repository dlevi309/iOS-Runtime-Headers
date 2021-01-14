/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@protocol OS_dispatch_semaphore;
@class NSLocale, NSCalendar, NSTimeZone, NSString, NSObject;

@interface NSDateIntervalFormatter : NSFormatter {

	NSLocale* _locale;
	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSString* _dateTemplate;
	NSString* _dateTemplateFromStyles;
	void* _formatter;
	unsigned long long _dateStyle;
	unsigned long long _timeStyle;
	BOOL _modified;
	BOOL _useTemplate;
	NSObject*<OS_dispatch_semaphore> _lock;
	void** _reserved[4];

}

@property (copy) NSLocale * locale; 
@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSString * dateTemplate; 
@property (assign) unsigned long long dateStyle; 
@property (assign) unsigned long long timeStyle; 
-(NSTimeZone *)timeZone;
-(id)stringForObjectValue:(id)arg1 ;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(NSLocale *)locale;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(NSString *)dateTemplate;
-(unsigned long long)boundaryStyle;
-(void)setDateTemplate:(NSString *)arg1 ;
-(void)setBoundaryStyle:(unsigned long long)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)stringFromDateInterval:(id)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
@end

