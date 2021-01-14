/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class _WKFrameHandle;

@interface SFPrintQueueItem : NSObject {

	BOOL _completed;
	/*^block*/id _completionHandler;
	BOOL _initiatedByWebContent;
	_WKFrameHandle* _frameHandle;

}

@property (nonatomic,readonly) _WKFrameHandle * frameHandle;              //@synthesize frameHandle=_frameHandle - In the implementation block
@property (nonatomic,readonly) BOOL initiatedByWebContent;                //@synthesize initiatedByWebContent=_initiatedByWebContent - In the implementation block
-(void)completeWithResult:(long long)arg1 ;
-(id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)initiatedByWebContent;
-(_WKFrameHandle *)frameHandle;
-(void)dealloc;
@end

