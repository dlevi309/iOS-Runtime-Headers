/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSData;

@interface BLDAAPBuffer : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(long long)appendHeader:(unsigned)arg1 size:(unsigned)arg2 ;
-(long long)appendUInt8:(unsigned char)arg1 withCode:(unsigned)arg2 ;
-(long long)appendUInt32:(unsigned)arg1 withCode:(unsigned)arg2 ;
-(long long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned)arg2 ;
@end

