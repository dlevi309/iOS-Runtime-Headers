/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@class NSData;

@interface HMIDataReader : NSObject {

	NSData* _data;
	unsigned long long _position;

}
-(unsigned long long)position;
-(void)seek:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)readUInt64;
-(id)readData:(unsigned long long)arg1 ;
-(unsigned)readUInt32;
@end

