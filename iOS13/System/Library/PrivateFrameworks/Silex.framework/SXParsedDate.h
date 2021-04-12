/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXParsedDate.h>
@class NSDate, NSTimeZone;


@protocol SXParsedDate <NSObject>
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) BOOL containedTime; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@required
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(BOOL)containedTime;

@end


@class NSDate, NSTimeZone, NSString;

@interface SXParsedDate : NSObject <SXParsedDate> {

	BOOL _containedTime;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL containedTime;                  //@synthesize containedTime=_containedTime - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;               //@synthesize timeZone=_timeZone - In the implementation block
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(BOOL)containedTime;
-(id)initWithDate:(id)arg1 containedTime:(BOOL)arg2 timeZone:(id)arg3 ;
@end

