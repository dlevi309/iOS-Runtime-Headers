/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

