/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString;

@interface BWLimitedGMErrorLogger : NSObject {

	int _maxLoggingCount;
	int _currentLoggingCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int maxLoggingCount;                  //@synthesize maxLoggingCount=_maxLoggingCount - In the implementation block
@property (nonatomic,readonly) int currentLoggingCount;              //@synthesize currentLoggingCount=_currentLoggingCount - In the implementation block
-(id)initWithName:(id)arg1 maxLoggingCount:(int)arg2 ;
-(NSString *)name;
-(int)maxLoggingCount;
-(void)resetCurrentLoggingCounter;
-(int)currentLoggingCount;
-(void)logErrorNumber:(int)arg1 errorString:(id)arg2 ;
-(void)dealloc;
@end

