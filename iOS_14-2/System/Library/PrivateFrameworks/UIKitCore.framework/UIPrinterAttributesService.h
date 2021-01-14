/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class PKPrinter;

@interface UIPrinterAttributesService : NSObject {

	int _printerWarningPollTime;
	PKPrinter* _printer;
	/*^block*/id _completionHandler;

}
+(id)instance;
-(id)init;
-(void)startPollForPrinterWarningStatus:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pollForPrinterWarningStatus;
-(void)stopPrinterWarningPolling;
-(void)dealloc;
@end

