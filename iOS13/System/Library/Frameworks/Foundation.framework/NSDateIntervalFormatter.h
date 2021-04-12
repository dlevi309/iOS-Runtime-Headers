/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(NSString *)dateTemplate;
-(void)setDateTemplate:(NSString *)arg1 ;
-(unsigned long long)dateStyle;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(unsigned long long)timeStyle;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(unsigned long long)boundaryStyle;
-(void)setBoundaryStyle:(unsigned long long)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)stringFromDateInterval:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
@end

