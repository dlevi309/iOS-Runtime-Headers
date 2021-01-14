/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
*/


@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(MIDINetworkHost *)host;
-(id)init;
-(void)dealloc;
@end

