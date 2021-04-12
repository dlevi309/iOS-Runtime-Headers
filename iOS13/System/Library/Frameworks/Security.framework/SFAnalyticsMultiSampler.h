/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface SFAnalyticsMultiSampler : NSObject {

	double _samplingInterval;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _name;
	/*^block*/id _block;
	int _notificationToken;
	Class _clientClass;
	BOOL _oncePerReport;
	BOOL _activeTimer;

}

@property (assign,nonatomic) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL oncePerReport;                 //@synthesize oncePerReport=_oncePerReport - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 interval:(double)arg2 block:(/*^block*/id)arg3 clientClass:(Class)arg4 ;
-(void)newTimer;
-(void)setupOnceTimer;
-(void)setupPeriodicTimer;
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
-(id)sampleNow;
-(void)pauseSampling;
-(void)resumeSampling;
-(BOOL)oncePerReport;
@end

