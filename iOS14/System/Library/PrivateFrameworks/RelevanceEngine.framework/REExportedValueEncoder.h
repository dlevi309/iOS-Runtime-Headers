/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REExportedValueEncoder : NSObject {

	unsigned long long _options;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(BOOL)arg4 ;
-(void)writeExportedValue:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectStart:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeObjectEnd:(id)arg1 toStream:(id)arg2 ;
-(void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(/*^block*/id)arg3 writerBlock:(/*^block*/id)arg4 endBlock:(/*^block*/id)arg5 wantsHeader:(BOOL)arg6 depth:(unsigned long long)arg7 ;
-(void)writeArrayStartToStream:(id)arg1 ;
-(void)writeArrayValuePairToStream:(id)arg1 valueWriter:(/*^block*/id)arg2 isLast:(BOOL)arg3 ;
-(void)writeArrayEndToStream:(id)arg1 ;
-(BOOL)writesArrayHeader;
-(void)writeDictionaryStartToStream:(id)arg1 ;
-(void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeDictionaryEndToStream:(id)arg1 ;
-(BOOL)writesDictionaryHeader;
-(void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2 ;
-(void)writeNumber:(id)arg1 toStream:(id)arg2 ;
-(void)writeString:(id)arg1 toStream:(id)arg2 ;
-(void)writeDate:(id)arg1 toStream:(id)arg2 ;
-(void)writeNullToStream:(id)arg1 ;
-(id)dataFromExportedValue:(id)arg1 ;
-(id)_namesArrayFromArray:(id)arg1 ;
@end

