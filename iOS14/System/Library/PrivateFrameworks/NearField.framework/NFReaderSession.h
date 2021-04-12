/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFReaderSessionCallbacks.h>

@protocol NFReaderSessionDelegate;
@class NSString;

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks> {

	id<NFReaderSessionDelegate> _delegate;
	long long _actionSheetUI;

}

@property (assign) id<NFReaderSessionDelegate> delegate; 
@property (readonly) long long actionSheetUI;                         //@synthesize actionSheetUI=_actionSheetUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFReaderSessionDelegate>)delegate;
-(void)setDelegate:(id<NFReaderSessionDelegate>)arg1 ;
-(id)transceive:(id)arg1 ;
-(BOOL)startPolling;
-(BOOL)stopPolling;
-(BOOL)connectTag:(id)arg1 ;
-(BOOL)checkNdefSupportsRead:(BOOL*)arg1 andWrite:(BOOL*)arg2 ;
-(BOOL)disconnectTag;
-(BOOL)checkPresence;
-(BOOL)startPollingWithError:(id*)arg1 ;
-(BOOL)stopPollingWithError:(id*)arg1 ;
-(BOOL)connectTag:(id)arg1 error:(id*)arg2 ;
-(BOOL)checkNdefSupportsRead:(BOOL*)arg1 andWrite:(BOOL*)arg2 error:(id*)arg3 ;
-(id)ndefReadWithError:(id*)arg1 ;
-(BOOL)disconnectTagWithError:(id*)arg1 ;
-(void)endSession;
-(void)didEndUnexpectedly;
-(id)ndefRead;
-(id)felicaState;
-(void)didTerminate:(id)arg1 ;
-(void)didUIControllerInvalidate:(id)arg1 ;
-(void)didDetectTags:(id)arg1 ;
-(void)didDetectExternalReaderWithNotification:(id)arg1 ;
-(id)initWithUIType:(long long)arg1 ;
-(BOOL)startPollingForTechnology:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)_disconnectTagWithCardRemoval:(BOOL)arg1 outError:(id*)arg2 ;
-(BOOL)checkPresenceWithError:(id*)arg1 ;
-(BOOL)formatNdefWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)ndefWrite:(id)arg1 error:(id*)arg2 ;
-(id)transceive:(id)arg1 error:(id*)arg2 ;
-(id)felicaStateWithError:(id*)arg1 ;
-(id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)startPollingForTechnology:(unsigned)arg1 ;
-(BOOL)disconnectTagWithCardRemoval:(id*)arg1 ;
-(BOOL)formatNdefWithKey:(id)arg1 ;
-(BOOL)ndefWrite:(id)arg1 ;
-(id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(BOOL)arg4 ;
-(unsigned)runScript:(id)arg1 parameters:(id)arg2 results:(id*)arg3 ;
-(id)felicaRequestService:(id)arg1 error:(id*)arg2 ;
-(id)updateUIAlertMessage:(id)arg1 ;
-(id)skipMifareClassification;
-(long long)actionSheetUI;
@end

