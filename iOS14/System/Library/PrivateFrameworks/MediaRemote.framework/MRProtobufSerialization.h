/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSDictionary;

@interface MRProtobufSerialization : NSObject {

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
-(id)createDictionaryFromProtobuf:(id)arg1 ;
-(id)createProtobufFromDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryKeyToProtobufKeyMapping;
-(Class)protobufClass;
-(void)setProtobufClass:(Class)arg1 ;
-(id)dictionaryValueToProtobufValueTransformer;
-(void)setDictionaryValueToProtobufValueTransformer:(id)arg1 ;
-(id)protobufValueToDictionaryValueTransformer;
-(void)setProtobufValueToDictionaryValueTransformer:(id)arg1 ;
@end

