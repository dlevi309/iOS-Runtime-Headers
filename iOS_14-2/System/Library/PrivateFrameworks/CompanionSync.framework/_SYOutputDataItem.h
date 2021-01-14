/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSData;

@interface _SYOutputDataItem : NSObject {

	NSData* _data;
	unsigned long long _bytesSent;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(unsigned long long)bytesSent;
@end

