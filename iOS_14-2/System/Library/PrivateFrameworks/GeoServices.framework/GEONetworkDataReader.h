/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)readString;
-(id)allData;
-(void)markOffset;
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(void)appendNetworkData:(id)arg1 ;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(void)seekToMarkedOffset;
-(BOOL)hasUnreadData;
-(id)initWithData:(id)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)dealloc;
@end

