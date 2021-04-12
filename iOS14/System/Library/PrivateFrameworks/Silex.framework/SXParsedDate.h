/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXParsedDate.h>
@class NSDate, NSTimeZone;


@protocol SXParsedDate <NSObject>
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) BOOL containedTime; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@required
-(NSTimeZone *)timeZone;
-(NSDate *)date;
-(BOOL)containedTime;

@end


@class NSDate, NSTimeZone, NSString;

@interface SXParsedDate : NSObject <SXParsedDate> {

	BOOL _containedTime;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL containedTime;                  //@synthesize containedTime=_containedTime - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;               //@synthesize timeZone=_timeZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimeZone *)timeZone;
-(NSDate *)date;
-(BOOL)containedTime;
-(id)initWithDate:(id)arg1 containedTime:(BOOL)arg2 timeZone:(id)arg3 ;
@end

