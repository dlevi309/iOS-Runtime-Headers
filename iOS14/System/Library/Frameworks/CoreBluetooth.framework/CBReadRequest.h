/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class NSError, NSData, NSMutableData;

@interface CBReadRequest : NSObject {

	char* _bufferPtr;
	NSError* _error;
	unsigned long long _length;
	/*^block*/id _completion;
	NSData* _data;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSMutableData* _bufferData;

}

@property (nonatomic,retain) NSMutableData * bufferData;                //@synthesize bufferData=_bufferData - In the implementation block
@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long minLength;              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
-(unsigned long long)maxLength;
-(unsigned long long)length;
-(id)completion;
-(unsigned long long)minLength;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(NSMutableData *)bufferData;
-(NSData *)data;
-(void)setBufferData:(NSMutableData *)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
@end

