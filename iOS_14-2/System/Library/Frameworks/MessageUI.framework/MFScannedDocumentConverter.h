/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

