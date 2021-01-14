/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	id* _keys;
	NSSharedKeySet* _subSharedKeySet;
	unsigned char _algorithmType;

}

@property (g) char* g;                                            //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                          //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                               //@synthesize rankTable=_rankTable - In the implementation block
@property (M) unsigned M;                                         //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                               //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                               //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                               //@synthesize seeds=_seeds - In the implementation block
@property (assign) id* keys;                                      //@synthesize keys=_keys - In the implementation block
@property (retain) NSSharedKeySet * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keySetWithKeys:(id)arg1 ;
-(id*)keys;
-(unsigned)M;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)maximumIndex;
-(unsigned char)select;
-(unsigned)factor;
-(void)setFactor:(unsigned)arg1 ;
-(unsigned*)seeds;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setG:(char*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)keySetCount;
-(char*)g;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setNumKey:(unsigned)arg1 ;
-(unsigned)numKey;
-(void)setKeys:(id*)arg1 ;
-(void)setRankTable:(void*)arg1 ;
-(void)setSelect:(unsigned char)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)hash;
-(void*)rankTable;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setSeeds:(unsigned*)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubSharedKeySet:(NSSharedKeySet *)arg1 ;
-(void)setM:(unsigned)arg1 ;
-(NSSharedKeySet *)subSharedKeySet;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

