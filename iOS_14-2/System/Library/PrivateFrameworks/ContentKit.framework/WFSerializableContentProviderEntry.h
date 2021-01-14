/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@interface WFSerializableContentProviderEntry : NSObject {

	/*^block*/id _serializationBlock;
	/*^block*/id _deserializationBlock;

}

@property (nonatomic,readonly) id serializationBlock;                //@synthesize serializationBlock=_serializationBlock - In the implementation block
@property (nonatomic,readonly) id deserializationBlock;              //@synthesize deserializationBlock=_deserializationBlock - In the implementation block
-(id)initWithSerializedRepresentationBlock:(/*^block*/id)arg1 deserializationBlock:(/*^block*/id)arg2 ;
-(id)serializationBlock;
-(id)deserializationBlock;
@end

