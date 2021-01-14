/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface REMMigrationResult : NSObject <NSSecureCoding> {

	BOOL _isObserver;
	NSString* _state;
	double _timeElapsed;
	unsigned long long _listsMigrated;
	unsigned long long _remindersMigrated;
	NSString* _log;

}

@property (nonatomic,readonly) NSString * state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isObserver;                                   //@synthesize isObserver=_isObserver - In the implementation block
@property (nonatomic,readonly) double timeElapsed;                                //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) unsigned long long listsMigrated;                  //@synthesize listsMigrated=_listsMigrated - In the implementation block
@property (nonatomic,readonly) unsigned long long remindersMigrated;              //@synthesize remindersMigrated=_remindersMigrated - In the implementation block
@property (nonatomic,readonly) NSString * log;                                    //@synthesize log=_log - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)log;
-(BOOL)isObserver;
-(unsigned long long)listsMigrated;
-(id)initWithState:(id)arg1 IsObserver:(BOOL)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)remindersMigrated;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(double)timeElapsed;
@end

