/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableData, NSData;

@interface TIKeyboardCandidateResultSetCoder : NSObject {

	NSMutableData* _mutableData;
	NSData* _data;
	unsigned long long _offset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableData;                //@synthesize mutableData=_mutableData - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) const char* bytes; 
@property (nonatomic,readonly) const char* currentPosition; 
+(id)decodeWithData:(id)arg1 ;
+(Class)classFromCandidateType:(int)arg1 ;
+(id)candidateTypeToClassNameMap;
+(id)encodeWithCandidateResultSet:(id)arg1 ;
-(void)encodeDouble:(double)arg1 ;
-(BOOL)decodeBool;
-(unsigned char)decodeByte;
-(void)encodeByte:(unsigned char)arg1 ;
-(unsigned short)decodeShort;
-(const char*)bytes;
-(id)initForEncoding;
-(const char*)currentPosition;
-(id)initForDecodingWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 mutableData:(id)arg2 ;
-(id)decodeCandidate;
-(void)encodeShort:(unsigned short)arg1 ;
-(double)decodeDouble;
-(void)encodeUInt32:(unsigned)arg1 ;
-(unsigned)decodeUInt32;
-(void)encodeUInt64:(unsigned long long)arg1 ;
-(unsigned long long)decodeUInt64;
-(id)decodeString;
-(void)encodeStringArray:(id)arg1 ;
-(id)decodeStringArray;
-(void)encodePointerValueArray:(id)arg1 ;
-(id)decodePointerValueArray;
-(id)dataFromCandidateResultSet:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)offset;
-(NSMutableData *)mutableData;
-(void)encodeBool:(BOOL)arg1 ;
-(NSData *)data;
-(void)encodeString:(id)arg1 ;
-(void)setMutableData:(NSMutableData *)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)candidateResultSet;
@end

