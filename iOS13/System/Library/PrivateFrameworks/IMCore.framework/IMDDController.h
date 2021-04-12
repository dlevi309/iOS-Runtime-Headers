/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject;

@interface IMDDController : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)scanMessage:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)scanMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3 ;
-(void)_processLinkInAttributedString:(id)arg1 ;
-(BOOL)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2 ;
-(DDScannerRef)sharedScanner;
-(id)scannerQueue;
@end

