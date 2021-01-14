/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSAKSerializer : NSObject {

	id ss;

}
-(unsigned long long)serializeObject:(id)arg1 ;
-(unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)initForSerializerStream:(id)arg1 ;
-(unsigned long long)serializeString:(id)arg1 ;
-(id)serializerStream;
-(unsigned long long)serializeData:(id)arg1 ;
-(unsigned long long)serializeList:(id)arg1 ;
-(unsigned long long)serializePropertyList:(id)arg1 ;
-(unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2 ;
-(void)dealloc;
@end

