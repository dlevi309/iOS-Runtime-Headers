/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOServerFormatTokenTimeStampValue.h>

@class NSTimeZone, NSString;

@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue> {

	double _timeStamp;
	NSTimeZone* _timeZone;
	NSString* _formatPattern;

}

@property (assign,nonatomic) double timeStamp;                      //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                 //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSString * formatPattern;              //@synthesize formatPattern=_formatPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)formatPattern;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeStamp;
-(void)setFormatPattern:(NSString *)arg1 ;
-(void)setTimeStamp:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

