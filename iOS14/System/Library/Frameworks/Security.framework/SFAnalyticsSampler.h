/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface SFAnalyticsSampler : NSObject {

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
-(double)samplingInterval;
-(id)initWithName:(id)arg1 interval:(double)arg2 block:(/*^block*/id)arg3 clientClass:(Class)arg4 ;
-(void)setupPeriodicTimer;
-(void)newTimer;
-(BOOL)oncePerReport;
-(NSString *)name;
-(void)setSamplingInterval:(double)arg1 ;
-(void)pauseSampling;
-(id)sampleNow;
-(void)setupOnceTimer;
-(void)resumeSampling;
-(void)dealloc;
@end

