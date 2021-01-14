/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEReader.h>

@class NSData;

@interface DEDataReader : NSObject <DEReader> {

	NSData* _data;
	unsigned long long _dataOffset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long dataOffset;              //@synthesize dataOffset=_dataOffset - In the implementation block
-(id)init;
-(unsigned long long)dataOffset;
-(void)setDataOffset:(unsigned long long)arg1 ;
-(void)close;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)readData;
@end

