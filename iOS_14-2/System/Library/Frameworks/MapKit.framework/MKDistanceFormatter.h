/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _units;
	unsigned long long _unitStyle;

}

@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long units;                  //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long unitStyle;              //@synthesize unitStyle=_unitStyle - In the implementation block
-(unsigned long long)units;
-(unsigned long long)unitStyle;
-(void)setUnitStyle:(unsigned long long)arg1 ;
-(void)setUnits:(unsigned long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(BOOL)_useMetric;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)distanceFromString:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)stringFromDistance:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
@end

