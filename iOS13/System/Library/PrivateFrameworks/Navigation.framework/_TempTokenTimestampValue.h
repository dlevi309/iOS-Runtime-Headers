/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(NSString *)formatPattern;
-(void)setFormatPattern:(NSString *)arg1 ;
@end

