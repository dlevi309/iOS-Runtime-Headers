/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFNdefTagSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks> {

	NFWeakReference* _delegate;

}

@property (assign) id<NFNdefTagSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)arg1 ;
-(void)dealloc;
-(id<NFNdefTagSessionDelegate>)delegate;
-(void)setDelegate:(id<NFNdefTagSessionDelegate>)arg1 ;
-(void)endSession;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned)arg2 ;
-(void)didEndUnexpectedly;
-(BOOL)startEmulation:(id)arg1 ;
-(BOOL)stopEmulation;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)startBluetoothLEPairingWithDeviceAddress:(id)arg1 role:(unsigned char)arg2 optionalOOBData:(id)arg3 ;
-(BOOL)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg1 optionalOOBData:(id)arg2 ;
-(BOOL)startBluetoothLESecureConnectionWithOOBData:(id)arg1 ;
-(BOOL)startEmulation:(id)arg1 withMessageType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)stopEmulationWithError:(id*)arg1 ;
-(BOOL)setTagData:(id)arg1 error:(id*)arg2 ;
-(id)getTagDataWithError:(id*)arg1 ;
-(id)getTagMessageWithError:(id*)arg1 ;
-(BOOL)enableWrite:(BOOL)arg1 error:(id*)arg2 ;
-(void)didTagStateChange:(unsigned)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)startEmulation:(id)arg1 error:(id*)arg2 ;
-(BOOL)startEmulation:(id)arg1 withMessageType:(unsigned)arg2 ;
-(BOOL)setTagMessage:(id)arg1 ;
-(BOOL)setTagMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)setTagData:(id)arg1 ;
-(id)getTagData;
-(id)getTagMessage;
-(BOOL)enableWrite:(BOOL)arg1 ;
@end

