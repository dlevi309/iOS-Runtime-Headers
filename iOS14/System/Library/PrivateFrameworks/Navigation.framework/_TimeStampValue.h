/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>

@class NSTimeZone, NSString;

@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue> {

	double _timeStamp;
	NSTimeZone* _timeZone;
	NSString* _formatPattern;

}

@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimeZone *)timeZone;
-(NSString *)formatPattern;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeStamp;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3 ;
@end

