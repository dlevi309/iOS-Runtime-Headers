/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSCalendar, NSDate, NSNumberFormatter;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {

	opaque_pthread_mutex_t _lock;
	void* _fmt;
	void* _unused;
	NSString* _fmtLocaleIdent;
	NSCalendar* _calendar;
	NSDate* _referenceDate;
	NSNumberFormatter* _unitFormatter;
	unsigned long long _allowedUnits;
	long long _formattingContext;
	long long _unitsStyle;
	unsigned long long _zeroFormattingBehavior;
	long long _maximumUnitCount;
	BOOL _allowsFractionalUnits;
	BOOL _collapsesLargestUnit;
	BOOL _includesApproximationPhrase;
	BOOL _includesTimeRemainingPhrase;
	void* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long unitsStyle; 
@property (assign) unsigned long long allowedUnits; 
@property (assign) unsigned long long zeroFormattingBehavior; 
@property (copy) NSCalendar * calendar; 
@property (copy) NSDate * referenceDate; 
@property (assign) BOOL allowsFractionalUnits; 
@property (assign) long long maximumUnitCount; 
@property (assign) BOOL collapsesLargestUnit; 
@property (assign) BOOL includesApproximationPhrase; 
@property (assign) BOOL includesTimeRemainingPhrase; 
@property (assign) long long formattingContext; 
+(id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(long long)formattingContext;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)_updateFormatterCacheIfNeeded_locked:(id)arg1 unitsStyle:(long long)arg2 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(unsigned long long)zeroFormattingBehavior;
-(void)finalize;
-(void)setIncludesTimeRemainingPhrase:(BOOL)arg1 ;
-(BOOL)includesApproximationPhrase;
-(id)init;
-(unsigned long long)allowedUnits;
-(BOOL)includesTimeRemainingPhrase;
-(void)setFormattingContext:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 withReferenceDate:(id)arg2 ;
-(void)_NSDateComponentsFormatter_commonInit;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long*)arg3 withReferenceDate:(id)arg4 ;
-(void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)arg1 ;
-(void)_ensureUnitFormatterWithLocale:(id)arg1 ;
-(id)_calendarFromDateComponents:(id)arg1 ;
-(long long)maximumUnitCount;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(void)setUnitsStyle:(long long)arg1 ;
-(id)_calendarOrCanonicalCalendar;
-(NSDate *)referenceDate;
-(id)stringFromTimeInterval:(double)arg1 ;
-(void)setAllowsFractionalUnits:(BOOL)arg1 ;
-(void)setZeroFormattingBehavior:(unsigned long long)arg1 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)allowsFractionalUnits;
-(void)setAllowedUnits:(unsigned long long)arg1 ;
-(void)setMaximumUnitCount:(long long)arg1 ;
-(void)setIncludesApproximationPhrase:(BOOL)arg1 ;
-(void)_flushFormatterCache_locked;
-(BOOL)collapsesLargestUnit;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)unitsStyle;
-(void)setCollapsesLargestUnit:(BOOL)arg1 ;
-(void)dealloc;
@end

