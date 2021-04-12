/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface REJSONExportedValueEncoder : REExportedValueEncoder
+(id)_dateFormatter;
-(void)writeObjectStart:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeObjectEnd:(id)arg1 toStream:(id)arg2 ;
-(void)writeArrayStartToStream:(id)arg1 ;
-(void)writeArrayValuePairToStream:(id)arg1 valueWriter:(/*^block*/id)arg2 isLast:(BOOL)arg3 ;
-(void)writeArrayEndToStream:(id)arg1 ;
-(BOOL)writesArrayHeader;
-(void)writeDictionaryStartToStream:(id)arg1 ;
-(void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeDictionaryEndToStream:(id)arg1 ;
-(BOOL)writesDictionaryHeader;
-(void)writeNumber:(id)arg1 toStream:(id)arg2 ;
-(void)writeString:(id)arg1 toStream:(id)arg2 ;
-(void)writeDate:(id)arg1 toStream:(id)arg2 ;
-(void)writeNullToStream:(id)arg1 ;
-(void)_writeValueAsJSON:(id)arg1 toStream:(id)arg2 ;
@end

