/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_xpc_object;
@class NSData, NSObject;

@interface CSDataWrapper : NSObject {

	BOOL _mapped;
	NSData* _data;
	unsigned long long _dataSize;
	NSObject*<OS_xpc_object> _xpcData;
	const void* _dataPtr;
	unsigned long long _mapSize;

}

@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
@property (nonatomic,readonly) const void* dataPtr;                           //@synthesize dataPtr=_dataPtr - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                     //@synthesize dataSize=_dataSize - In the implementation block
@property (nonatomic,readonly) unsigned long long mapSize;                    //@synthesize mapSize=_mapSize - In the implementation block
@property (nonatomic,readonly) BOOL mapped;                                   //@synthesize mapped=_mapped - In the implementation block
-(NSObject*<OS_xpc_object>)xpcData;
-(const void*)dataPtr;
-(unsigned long long)mapSize;
-(id)initWithXPCValue:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)dataSize;
-(BOOL)mapped;
-(NSData *)data;
-(id)initWithXPCValue:(id)arg1 allowWritableSharedMemory:(BOOL)arg2 ;
-(void)setDataSize:(unsigned long long)arg1 ;
-(void)dealloc;
@end

