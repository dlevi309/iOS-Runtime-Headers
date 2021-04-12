/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class NSMutableData, NSData;

@interface RMSDAAPEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forCode:(unsigned)arg3 ;
-(void)encodeInt32:(int)arg1 forCode:(unsigned)arg2 ;
-(void)encodeInt64:(long long)arg1 forCode:(unsigned)arg2 ;
-(void)encodeString:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeData:(id)arg1 forCode:(unsigned)arg2 ;
@end

