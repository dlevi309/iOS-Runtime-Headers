/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol CalLogWriter <NSObject>
@property (nonatomic,retain) id<CalLogFormatter> formatter; 
@required
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id)arg1;
-(id)initWithParameters:(id)arg1;
-(BOOL)flush;
-(void)write:(id)arg1;

@end


@protocol CalLogFormatter;
@class NSString;

@interface CalLogWriter : NSObject <CalLogWriter> {

	id<CalLogFormatter> _formatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CalLogFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(id)init;
-(NSString *)description;
-(id<CalLogFormatter>)formatter;
-(void)setFormatter:(id<CalLogFormatter>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)flush;
-(void)write:(id)arg1 ;
@end

