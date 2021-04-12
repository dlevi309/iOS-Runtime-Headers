/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class NSNumber, utf16leData, vtVector, vtSafeArray;

@interface cbaseVariant : NSObject {

	unsigned char _vData1;
	unsigned char _vData2;
	unsigned short _vType;
	NSNumber* _scalarValue;
	utf16leData* _strData;
	vtVector* _vectObj;
	vtSafeArray* _arrObj;

}

@property (readonly) unsigned short vType;                       //@synthesize vType=_vType - In the implementation block
@property (readonly) unsigned char vData1;                       //@synthesize vData1=_vData1 - In the implementation block
@property (readonly) unsigned char vData2;                       //@synthesize vData2=_vData2 - In the implementation block
@property (retain,readonly) NSNumber * scalarValue;              //@synthesize scalarValue=_scalarValue - In the implementation block
@property (retain,readonly) utf16leData * strData;               //@synthesize strData=_strData - In the implementation block
@property (retain) vtVector * vectObj;                           //@synthesize vectObj=_vectObj - In the implementation block
@property (retain) vtSafeArray * arrObj;                         //@synthesize arrObj=_arrObj - In the implementation block
-(id)init;
-(NSNumber *)scalarValue;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)setStringType:(unsigned short)arg1 UTF8Str:(id)arg2 ;
-(int)setScalarType:(unsigned short)arg1 ScalarValue:(id)arg2 ;
-(int)setVectorWithType:(unsigned short)arg1 ValueArray:(id)arg2 ;
-(int)setArrayWithType:(unsigned short)arg1 ValueArray:(id)arg2 ;
-(int)setStrVectorType:(unsigned short)arg1 ValueArray:(id)arg2 ;
-(int)setIntVectorType:(unsigned)arg1 ValueArray:(id)arg2 ;
-(void)setVectObj:(vtVector *)arg1 ;
-(vtVector *)vectObj;
-(int)setStrArrayType:(unsigned short)arg1 ValueArray:(id)arg2 ;
-(int)setIntArrayType:(unsigned)arg1 ValueArray:(id)arg2 ;
-(void)setArrObj:(vtSafeArray *)arg1 ;
-(vtSafeArray *)arrObj;
-(unsigned short)vType;
-(utf16leData *)strData;
-(int)encodeArray:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeVector:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeStrArray:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeIntArray:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeStrVector:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeIntVector:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(unsigned char)vData1;
-(unsigned char)vData2;
@end

