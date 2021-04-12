/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@class NSFileHandle;

@interface ATFileBuffer : NSObject {

	NSFileHandle* _bufferFileHandle;
	unsigned long long _currentReadLocation;
	unsigned long long _length;

}
-(id)init;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)rewind:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)rewindData:(id)arg1 ;
@end

