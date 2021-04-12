/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem : HAP2AccessoryServerPairingDriverWorkItem {

	BOOL _connect;
	NSError* _cancelError;

}

@property (nonatomic,readonly) BOOL connect;                     //@synthesize connect=_connect - In the implementation block
@property (nonatomic,retain) NSError * cancelError;              //@synthesize cancelError=_cancelError - In the implementation block
+(id)openConnection;
+(id)closeConnection;
-(void)_finishWithError:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(BOOL)connect;
-(NSError *)cancelError;
-(void)runForPairingDriver:(id)arg1 ;
-(id)initWithConnect:(BOOL)arg1 ;
-(id)initForOpening;
-(id)initForClosing;
@end

