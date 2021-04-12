/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@class NSDictionary;

@interface NMRProtobufSerialization : NSObject {

	NSDictionary* _protobufKeyToDictionaryKeyMapping;
	NSDictionary* _dictionaryKeyToProtobufKeyMapping;
	Class _protobufClass;
	/*^block*/id _dictionaryValueToProtobufValueTransformer;
	/*^block*/id _protobufValueToDictionaryValueTransformer;

}

@property (nonatomic,copy) NSDictionary * dictionaryKeyToProtobufKeyMapping;              //@synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping - In the implementation block
@property (nonatomic,retain) Class protobufClass;                                         //@synthesize protobufClass=_protobufClass - In the implementation block
@property (nonatomic,copy) id dictionaryValueToProtobufValueTransformer;                  //@synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer - In the implementation block
@property (nonatomic,copy) id protobufValueToDictionaryValueTransformer;                  //@synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer - In the implementation block
-(void)setDictionaryKeyToProtobufKeyMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryKeyToProtobufKeyMapping;
-(Class)protobufClass;
-(void)setProtobufClass:(Class)arg1 ;
-(id)dictionaryValueToProtobufValueTransformer;
-(void)setDictionaryValueToProtobufValueTransformer:(id)arg1 ;
-(id)protobufValueToDictionaryValueTransformer;
-(void)setProtobufValueToDictionaryValueTransformer:(id)arg1 ;
-(id)protobufFromDictionary:(id)arg1 ;
-(id)dictionaryFromProtobuf:(id)arg1 ;
-(id)protobufDataFromDictionary:(id)arg1 ;
-(id)dictionaryFromProtobufData:(id)arg1 ;
@end

