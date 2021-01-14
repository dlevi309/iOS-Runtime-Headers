/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addDeviceIntoSplitterDeviceList:(id)arg1 ;
-(id)description;
-(BOOL)splitterEnabled;
-(id)splitterDeviceList;
-(void)setSplitterEnabled:(BOOL)arg1 ;
-(BOOL)shouldDisableSpeakerVerificationInSplitterMode;
-(unsigned long long)splitterState;
-(BOOL)_hasDeviceTemporaryPairedNotInContacts;
@end

