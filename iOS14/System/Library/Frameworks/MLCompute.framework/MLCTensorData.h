/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSData;

@interface MLCTensorData : NSObject {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)dataWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithImmutableBytesNoCopy:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void*)bytes;
-(unsigned long long)length;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)initWithData:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithDataNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
@end

