/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSession.h>
#import <libobjc.A.dylib/NFReaderSessionDelegate.h>

@protocol PKNFCTagReaderSessionDelegate;
@class NSString;

@interface PKNFCTagReaderSession : PKPaymentSession <NFReaderSessionDelegate> {

	id<PKNFCTagReaderSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNFCTagReaderSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKNFCTagReaderSessionDelegate>)delegate;
-(void)setDelegate:(id<PKNFCTagReaderSessionDelegate>)arg1 ;
-(void)endSession;
-(void)readerSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg1 ;
-(void)startPolling;
-(void)stopPolling;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(void)readNDEFMessageFromTag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

