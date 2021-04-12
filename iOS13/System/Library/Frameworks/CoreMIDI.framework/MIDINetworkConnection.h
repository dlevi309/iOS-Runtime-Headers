/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(MIDINetworkHost *)host;
@end

