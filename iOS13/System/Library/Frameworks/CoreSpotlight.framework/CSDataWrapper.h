/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(const void*)dataPtr;
-(void)setDataSize:(unsigned long long)arg1 ;
-(unsigned long long)dataSize;
-(id)initWithXPCValue:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcData;
-(unsigned long long)mapSize;
-(BOOL)mapped;
@end

