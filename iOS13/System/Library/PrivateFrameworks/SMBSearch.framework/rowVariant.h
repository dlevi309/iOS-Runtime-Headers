/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class NSString, NSMutableArray;

@interface rowVariant : NSObject {

	unsigned char _reserved1;
	short _vType;
	unsigned _reserved2;
	unsigned _uint4Val;
	int _int4Val;
	unsigned long long _uint64Val;
	NSString* _strValue;
	NSMutableArray* _vector;
	unsigned long long _vectorCount;
	timespec _timeSpec;

}

@property (assign) short vType;                                 //@synthesize vType=_vType - In the implementation block
@property (assign) unsigned char reserved1;                     //@synthesize reserved1=_reserved1 - In the implementation block
@property (assign) unsigned reserved2;                          //@synthesize reserved2=_reserved2 - In the implementation block
@property (assign) unsigned long long uint64Val;                //@synthesize uint64Val=_uint64Val - In the implementation block
@property (assign) timespec timeSpec;                           //@synthesize timeSpec=_timeSpec - In the implementation block
@property (assign) unsigned uint4Val;                           //@synthesize uint4Val=_uint4Val - In the implementation block
@property (assign) int int4Val;                                 //@synthesize int4Val=_int4Val - In the implementation block
@property (retain) NSString * strValue;                         //@synthesize strValue=_strValue - In the implementation block
@property (retain) NSMutableArray * vector;                     //@synthesize vector=_vector - In the implementation block
@property (assign) unsigned long long vectorCount;              //@synthesize vectorCount=_vectorCount - In the implementation block
-(id)init;
-(unsigned)reserved2;
-(unsigned long long)vectorCount;
-(NSMutableArray *)vector;
-(void)setTimeSpec:(timespec)arg1 ;
-(timespec)timeSpec;
-(short)vType;
-(void)setReserved2:(unsigned)arg1 ;
-(int)decodeBuffer:(id)arg1 BaseOffset:(unsigned)arg2 RowStart:(unsigned)arg3 ValueOffset:(unsigned)arg4 ValueLen:(unsigned)arg5 Use64bit:(BOOL)arg6 ;
-(void)setVType:(short)arg1 ;
-(int)utf16StrLen:(id)arg1 Offset:(unsigned long long)arg2 Result:(unsigned*)arg3 ;
-(unsigned char)reserved1;
-(void)setReserved1:(unsigned char)arg1 ;
-(unsigned long long)uint64Val;
-(void)setUint64Val:(unsigned long long)arg1 ;
-(unsigned)uint4Val;
-(void)setUint4Val:(unsigned)arg1 ;
-(int)int4Val;
-(void)setInt4Val:(int)arg1 ;
-(NSString *)strValue;
-(void)setStrValue:(NSString *)arg1 ;
-(void)setVector:(NSMutableArray *)arg1 ;
-(void)setVectorCount:(unsigned long long)arg1 ;
@end

