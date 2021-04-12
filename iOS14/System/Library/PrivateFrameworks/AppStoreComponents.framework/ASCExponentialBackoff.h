/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCBackoff.h>

@class JEUnfairLock, NSString;

@interface ASCExponentialBackoff : NSObject <ASCBackoff> {

	double _baseSleepTimeInterval;
	double _maxSleepTimeInterval;
	JEUnfairLock* _attemptLock;
	long long _attemptsMade;

}

@property (nonatomic,readonly) double baseSleepTimeInterval;              //@synthesize baseSleepTimeInterval=_baseSleepTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxSleepTimeInterval;               //@synthesize maxSleepTimeInterval=_maxSleepTimeInterval - In the implementation block
@property (nonatomic,readonly) JEUnfairLock * attemptLock;                //@synthesize attemptLock=_attemptLock - In the implementation block
@property (assign,nonatomic) long long attemptsMade;                      //@synthesize attemptsMade=_attemptsMade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(JEUnfairLock *)attemptLock;
-(long long)attemptsMade;
-(double)baseSleepTimeInterval;
-(void)setAttemptsMade:(long long)arg1 ;
-(double)maxSleepTimeInterval;
-(double)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2 ;
@end

