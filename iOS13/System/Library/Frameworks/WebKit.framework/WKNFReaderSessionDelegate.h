/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@class NSString;

@interface WKNFReaderSessionDelegate : NSObject <NFReaderSessionDelegate> {

	WeakPtr<WebKit::NfcConnection>* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(NfcConnection*)arg1 ;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
@end

