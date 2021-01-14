/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSAKDeserializer : NSObject {

	id ds;

}
-(id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3 ;
-(id)deserializeData:(id)arg1 ;
-(id)deserializeNewString;
-(id)deserializeNewObject;
-(id)deserializeList:(id)arg1 ;
-(id)initForDeserializerStream:(id)arg1 ;
-(id)deserializePList:(id)arg1 ;
-(id)deserializePListKeyIn:(id)arg1 ;
-(id)deserializeNewPList;
-(id)deserializeNewKeyString;
-(id)deserializeNewData;
-(id)deserializeNewList;
-(id)deserializeString:(id)arg1 ;
-(id)deserializerStream;
-(void)dealloc;
@end

