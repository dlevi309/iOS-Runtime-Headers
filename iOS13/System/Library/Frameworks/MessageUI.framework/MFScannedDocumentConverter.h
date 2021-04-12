/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MFScannedDocumentConverter : NSObject <EFLoggable> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(id)pdfDocumentFromScannedDocument:(id)arg1 ;
-(id)_pdfConverterFromScannedDocument:(id)arg1 ;
@end

