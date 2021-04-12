/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


#import <CoreRE/CoreRE-Structs.h>
@interface REAudioPacket : NSObject {

	void* _bytes;
	unsigned long long _size;
	double _timestamp;

}
-(void)dealloc;
-(id)initWithPacket:(RERealTimePacket*)arg1 ;
@end

