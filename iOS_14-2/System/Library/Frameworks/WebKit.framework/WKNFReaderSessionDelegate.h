/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@class NSString;

@interface WKNFReaderSessionDelegate : NSObject <NFReaderSessionDelegate> {

	WeakPtr<WebKit::NfcConnection, WTF::EmptyCounter>* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(NfcConnection*)arg1 ;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
@end

