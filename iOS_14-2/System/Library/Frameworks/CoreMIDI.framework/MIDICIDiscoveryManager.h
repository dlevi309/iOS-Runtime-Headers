/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@interface MIDICIDiscoveryManager : NSObject {

	unsigned _mClient;
	/*^block*/id _mResponseBlock;

}

@property (nonatomic,copy) id responseBlock;              //@synthesize mResponseBlock=_mResponseBlock - In the implementation block
+(id)sharedInstance;
-(int)setupManager;
-(id)responseBlock;
-(id)handleNotification:(const MIDINotification*)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)dealloc;
-(void)discoverWithHandler:(/*^block*/id)arg1 ;
-(int)createClient;
-(void)debugPrintMessage;
-(void)discover;
@end

