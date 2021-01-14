/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol CalLogWriter <NSObject>
@property (nonatomic,retain) id<CalLogFormatter> formatter; 
@required
-(BOOL)flush;
-(id<CalLogFormatter>)formatter;
-(void)write:(id)arg1;
-(void)setFormatter:(id)arg1;
-(id)initWithParameters:(id)arg1;

@end


@protocol CalLogFormatter;
@class NSString;

@interface CalLogWriter : NSObject <CalLogWriter> {

	id<CalLogFormatter> _formatter;

}

@property (nonatomic,retain) id<CalLogFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)flush;
-(id<CalLogFormatter>)formatter;
-(id)init;
-(void)write:(id)arg1 ;
-(void)setFormatter:(id<CalLogFormatter>)arg1 ;
-(NSString *)description;
-(id)initWithParameters:(id)arg1 ;
@end

