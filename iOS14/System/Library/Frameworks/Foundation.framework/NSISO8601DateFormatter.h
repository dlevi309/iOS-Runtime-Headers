/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone;

@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding> {

	CFDateFormatterRef _formatter;
	NSTimeZone* _timeZone;
	unsigned long long _formatOptions;

}

@property (copy) NSTimeZone * timeZone; 
@property (assign) unsigned long long formatOptions; 
+(BOOL)supportsSecureCoding;
+(id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3 ;
-(NSTimeZone *)timeZone;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(id)dateFromString:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)formatOptions;
-(void)updateFormatter;
-(void)setFormatOptions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(void)dealloc;
@end

