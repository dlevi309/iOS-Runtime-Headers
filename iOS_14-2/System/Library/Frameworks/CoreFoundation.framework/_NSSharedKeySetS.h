/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NSSharedKeySetS : NSObject <NSCopying> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	double _c;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	unsigned short* _keys1[1];
	unsigned short* _keys2[2];
	unsigned short* _keys3[3];
	unsigned char* _ckeys[3];
	_NSSharedKeySetS* _subSharedKeySet;
	unsigned _keyLen;
	unsigned _type;

}

@property (g) char* g;                                              //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                            //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                                 //@synthesize rankTable=_rankTable - In the implementation block
@property (c) double c;                                             //@synthesize c=_c - In the implementation block
@property (M) unsigned M;                                           //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                                 //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                                 //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                                 //@synthesize seeds=_seeds - In the implementation block
@property (assign) unsigned short* keys1[1];                        //@synthesize keys1=_keys1 - In the implementation block
@property (assign) unsigned short* keys2[2];                        //@synthesize keys2=_keys2 - In the implementation block
@property (assign) unsigned short* keys3[3];                        //@synthesize keys3=_keys3 - In the implementation block
@property (assign) unsigned char* ckeys[3];                         //@synthesize ckeys=_ckeys - In the implementation block
@property (assign) unsigned keyLen;                                 //@synthesize keyLen=_keyLen - In the implementation block
@property (assign) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (retain) _NSSharedKeySetS * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
-(unsigned short*)keys1;
-(void)setKeys2:(unsigned short*)arg1 ;
-(void)setCkeys:(unsigned char*)arg1 ;
-(unsigned short*)keys2;
-(unsigned short*)keys3;
-(void)setKeyLen:(unsigned)arg1 ;
-(unsigned char*)ckeys;
-(double)c;
-(unsigned)keyLen;
-(void)setKeys1:(unsigned short*)arg1 ;
-(void)setKeys3:(unsigned short*)arg1 ;
-(char*)bytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexForBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithKeys:(void*)arg1 keyLenghtInBytes:(unsigned)arg2 count:(unsigned)arg3 type:(unsigned)arg4 ;
-(void)setC:(double)arg1 ;
-(unsigned)M;
-(id)init;
-(unsigned)maximumIndex;
-(unsigned char)select;
-(unsigned)factor;
-(void)setFactor:(unsigned)arg1 ;
-(unsigned*)seeds;
-(void)setG:(char*)arg1 ;
-(unsigned)count;
-(unsigned)keySetCount;
-(char*)g;
-(void)setType:(unsigned)arg1 ;
-(unsigned short*)keyAtIndex:(unsigned long long)arg1 ;
-(void)setNumKey:(unsigned)arg1 ;
-(unsigned)numKey;
-(void)setRankTable:(void*)arg1 ;
-(void)setSelect:(unsigned char)arg1 ;
-(unsigned)type;
-(unsigned long long)hash;
-(void*)rankTable;
-(BOOL)isEmpty;
-(void)setSeeds:(unsigned*)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubSharedKeySet:(_NSSharedKeySetS *)arg1 ;
-(void)setM:(unsigned)arg1 ;
-(_NSSharedKeySetS *)subSharedKeySet;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

