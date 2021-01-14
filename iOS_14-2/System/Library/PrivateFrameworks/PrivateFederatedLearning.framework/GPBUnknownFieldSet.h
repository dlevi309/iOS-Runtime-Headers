/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GPBUnknownFieldSet : NSObject <NSCopying> {

	CFDictionaryRef fields_;

}
+(BOOL)isFieldTag:(int)arg1 ;
-(id)description;
-(id)data;
-(unsigned long long)hash;
-(void)addField:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getTags:(int*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)sortedFields;
-(unsigned long long)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)writeAsMessageSetTo:(id)arg1 ;
-(void)mergeMessageSetMessage:(int)arg1 data:(id)arg2 ;
-(BOOL)mergeFieldFrom:(int)arg1 input:(id)arg2 ;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(void)mergeUnknownFields:(id)arg1 ;
-(unsigned long long)countOfFields;
-(unsigned long long)serializedSizeAsMessageSet;
-(void)mergeVarintField:(int)arg1 value:(int)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 ;
-(id)mutableFieldForNumber:(int)arg1 create:(BOOL)arg2 ;
-(BOOL)hasField:(int)arg1 ;
-(id)getField:(int)arg1 ;
-(void)mergeFromData:(id)arg1 ;
@end

