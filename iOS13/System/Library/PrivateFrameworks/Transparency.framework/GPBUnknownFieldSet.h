/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GPBUnknownFieldSet : NSObject <NSCopying> {

	CFDictionaryRef fields_;

}
+(BOOL)isFieldTag:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(void)addField:(id)arg1 ;
-(unsigned long long)serializedSize;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)mergeFromCodedInputStream:(id)arg1 ;
-(id)mutableFieldForNumber:(int)arg1 create:(BOOL)arg2 ;
-(BOOL)mergeFieldFrom:(int)arg1 input:(id)arg2 ;
-(BOOL)hasField:(int)arg1 ;
-(id)getField:(int)arg1 ;
-(unsigned long long)countOfFields;
-(id)sortedFields;
-(void)writeAsMessageSetTo:(id)arg1 ;
-(unsigned long long)serializedSizeAsMessageSet;
-(void)mergeUnknownFields:(id)arg1 ;
-(void)mergeFromData:(id)arg1 ;
-(void)mergeVarintField:(int)arg1 value:(int)arg2 ;
-(void)mergeMessageSetMessage:(int)arg1 data:(id)arg2 ;
-(void)getTags:(int*)arg1 ;
@end

