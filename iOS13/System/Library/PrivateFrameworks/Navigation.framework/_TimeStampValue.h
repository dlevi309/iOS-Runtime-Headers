/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>

@class NSTimeZone, NSString;

@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue> {

	double _timeStamp;
	NSTimeZone* _timeZone;
	NSString* _formatPattern;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(double)timeStamp;
-(NSString *)formatPattern;
-(id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3 ;
@end

