/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionFactory.h>

@protocol SXDateParser;
@class NSString;

@interface SXCalendarEventActionFactory : NSObject <SXActionFactory> {

	id<SXDateParser> _dateParser;

}

@property (nonatomic,readonly) id<SXDateParser> dateParser;              //@synthesize dateParser=_dateParser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDateParser>)dateParser;
-(id)actionForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)actionForURL:(id)arg1 ;
-(id)initWithDateParser:(id)arg1 ;
-(id)actionForAddition:(id)arg1 ;
@end

