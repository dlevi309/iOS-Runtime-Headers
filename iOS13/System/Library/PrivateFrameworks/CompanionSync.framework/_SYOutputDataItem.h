/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
@end

