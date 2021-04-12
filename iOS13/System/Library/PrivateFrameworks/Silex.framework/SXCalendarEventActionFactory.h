/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)actionForAddition:(id)arg1 ;
-(id)actionForURL:(id)arg1 ;
-(id)actionForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id<SXDateParser>)dateParser;
-(id)initWithDateParser:(id)arg1 ;
@end

