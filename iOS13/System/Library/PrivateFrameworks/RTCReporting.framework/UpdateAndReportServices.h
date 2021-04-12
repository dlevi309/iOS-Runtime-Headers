/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
*/


@interface UpdateAndReportServices : NSObject {

	BOOL _update;
	BOOL _report;
	/*^block*/id _block;

}

@property (readonly) BOOL update;              //@synthesize update=_update - In the implementation block
@property (readonly) BOOL report;              //@synthesize report=_report - In the implementation block
@property (copy) id block;                     //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)block;
-(BOOL)update;
-(void)setBlock:(id)arg1 ;
-(BOOL)report;
-(id)initWithServices:(BOOL)arg1 needToReport:(BOOL)arg2 service:(/*^block*/id)arg3 ;
@end

