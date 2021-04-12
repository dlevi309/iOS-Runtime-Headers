/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@interface TSPObjectSerializationDirectoryEntry : NSObject {

	unsigned long long _offset;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                //@synthesize size=_size - In the implementation block
-(id)init;
-(unsigned long long)size;
-(unsigned long long)offset;
-(id)initWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
@end

