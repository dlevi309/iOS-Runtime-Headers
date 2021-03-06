/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/SFContinuityScanManagerObserver.h>

@protocol SFActivityScannerDelegate;
@class NSUUID, NSString;

@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver> {

	id<SFActivityScannerDelegate> _delegate;
	NSUUID* _identifier;

}

@property (retain) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) id<SFActivityScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2 ;
-(void)scanForTypes:(unsigned long long)arg1 ;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2 ;
-(id)init;
-(id<SFActivityScannerDelegate>)delegate;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2 ;
-(void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
-(void)dealloc;
@end

