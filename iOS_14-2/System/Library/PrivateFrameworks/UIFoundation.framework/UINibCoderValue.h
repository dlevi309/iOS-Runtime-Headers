/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@class NSString;

@interface UINibCoderValue : NSObject {

	NSString* key;
	unsigned scope;
	char type;
	SCD_Union_UI23* value;
	unsigned long long length;

}
+(id)nibValueForInt8:(unsigned char)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt16:(unsigned short)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt32:(unsigned)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInt64:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForObjectReference:(long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForInteger:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForBoolean:(BOOL)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForDouble:(double)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForFloat:(float)arg1 key:(id)arg2 scope:(unsigned)arg3 ;
+(id)nibValueForBytes:(const void*)arg1 length:(unsigned long long)arg2 key:(id)arg3 scope:(unsigned)arg4 ;
+(id)nibValueRepresentingNilReferenceForKey:(id)arg1 scope:(unsigned)arg2 ;
-(unsigned long long)byteLength;
-(void)dealloc;
@end

