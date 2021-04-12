/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)completeWithResult:(long long)arg1 ;
-(_WKFrameHandle *)frameHandle;
-(id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)initiatedByWebContent;
@end

