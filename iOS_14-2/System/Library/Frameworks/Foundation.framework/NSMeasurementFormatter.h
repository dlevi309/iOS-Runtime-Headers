/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {

	void* _formatter;

}

@property (assign) unsigned long long unitOptions; 
@property (assign) long long unitStyle; 
@property (copy) NSLocale * locale; 
@property (copy) NSNumberFormatter * numberFormatter; 
+(BOOL)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(unsigned long long)unitOptions;
-(NSNumberFormatter *)numberFormatter;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(id)stringFromMeasurement:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

