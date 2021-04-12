/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@class NSFileHandle;

@interface ATFileBuffer : NSObject {

	NSFileHandle* _bufferFileHandle;
	unsigned long long _currentReadLocation;
	unsigned long long _length;

}
-(id)init;
-(unsigned long long)length;
-(void)appendData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)rewindData:(id)arg1 ;
-(void)rewind:(unsigned long long)arg1 ;
@end

