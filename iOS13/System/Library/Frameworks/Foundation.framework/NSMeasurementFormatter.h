/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(unsigned long long)unitOptions;
-(void)setUnitStyle:(long long)arg1 ;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(long long)unitStyle;
-(id)stringFromUnit:(id)arg1 ;
-(id)stringFromMeasurement:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
@end

