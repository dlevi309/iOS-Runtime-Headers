/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface RELogExportedValueEncoder : REExportedValueEncoder
+(id)_dateFormatter;
-(void)writeObjectStart:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeArrayValuePairToStream:(id)arg1 valueWriter:(/*^block*/id)arg2 isLast:(BOOL)arg3 ;
-(void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeNumber:(id)arg1 toStream:(id)arg2 ;
-(void)writeString:(id)arg1 toStream:(id)arg2 ;
-(void)writeDate:(id)arg1 toStream:(id)arg2 ;
-(void)writeNullToStream:(id)arg1 ;
@end

