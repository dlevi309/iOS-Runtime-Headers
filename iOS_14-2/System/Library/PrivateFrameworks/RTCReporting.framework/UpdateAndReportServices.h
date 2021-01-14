/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)report;
-(BOOL)update;
-(void)dealloc;
-(id)initWithServices:(BOOL)arg1 needToReport:(BOOL)arg2 service:(/*^block*/id)arg3 ;
@end

