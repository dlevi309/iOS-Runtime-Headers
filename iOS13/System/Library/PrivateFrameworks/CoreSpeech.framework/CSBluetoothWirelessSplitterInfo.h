/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {

	NSMutableArray* _splitterDeviceList;
	BOOL _splitterEnabled;

}

@property (assign,nonatomic) BOOL splitterEnabled;                                               //@synthesize splitterEnabled=_splitterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSpeakerVerificationInSplitterMode; 
-(id)init;
-(id)description;
-(unsigned long long)splitterState;
-(BOOL)_hasDeviceTemporaryPairedNotInContacts;
-(id)splitterDeviceList;
-(void)addDeviceIntoSplitterDeviceList:(id)arg1 ;
-(BOOL)shouldDisableSpeakerVerificationInSplitterMode;
-(BOOL)splitterEnabled;
-(void)setSplitterEnabled:(BOOL)arg1 ;
@end

