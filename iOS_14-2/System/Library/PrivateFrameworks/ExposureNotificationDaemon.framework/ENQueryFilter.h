/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@interface ENQueryFilter : NSObject {

	char* _filterBuffer;
	unsigned long long* _hashSalts;
	unsigned long long _bufferSize;
	unsigned long long _hashCount;

}

@property (nonatomic,readonly) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long hashCount;               //@synthesize hashCount=_hashCount - In the implementation block
-(id)init;
-(unsigned long long)bufferSize;
-(void)dealloc;
-(id)initWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 ;
-(void)addPossibleRPI:(const void*)arg1 ;
-(BOOL)shouldIgnoreRPI:(const void*)arg1 ;
-(unsigned long long)hashCount;
@end

