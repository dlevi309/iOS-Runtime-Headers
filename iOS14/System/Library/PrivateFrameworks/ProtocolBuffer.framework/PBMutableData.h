/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/

#import <CoreFoundation/NSMutableData.h>

@interface PBMutableData : NSMutableData {

	char* p;
	char* buffer;
	char* end;

}
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
@end

