/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSString;

@interface CVNLPCaptionPerformanceResult : NSObject {

	double maxpeak;
	double peakdelta;
	double recentpeak;
	double current;
	double cpuTime;
	double cpuInstructions;
	double timeInterval;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)dict;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
@end

