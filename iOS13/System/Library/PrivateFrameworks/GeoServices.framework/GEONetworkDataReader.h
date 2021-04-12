/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned long long _dataLength;
	const void* _bytes;
	unsigned long long _bookmarkOffset;
	unsigned long long _offset;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)readString;
-(id)allData;
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(void)appendNetworkData:(id)arg1 ;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)markOffset;
-(void)seekToMarkedOffset;
-(BOOL)hasUnreadData;
@end

