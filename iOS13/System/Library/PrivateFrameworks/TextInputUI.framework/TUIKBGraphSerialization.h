/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


#import <TextInputUI/TextInputUI-Structs.h>
@class NSMapTable, NSDictionary, NSData, NSMutableDictionary, NSMutableData;

@interface TUIKBGraphSerialization : NSObject {

	NSMapTable* _serializedOffsets;
	NSDictionary* _keyboardOffsets;
	NSData* _keyboardOffsetsData;
	NSData* _graphData;
	NSData* _serializedData;
	NSMutableDictionary* _minEdgeWidths;
	NSMutableDictionary* _maxEdgeWidths;
	NSMutableDictionary* _referenceCount;
	BOOL _disableOffsets;
	NSMutableDictionary* _deserializationCache;

}

@property (nonatomic,readonly) NSMutableData * graphData; 
@property (nonatomic,readonly) NSMutableDictionary * keyboardOffsets; 
@property (nonatomic,retain) NSData * serializedData; 
@property (nonatomic,retain) NSMutableDictionary * deserializationCache;              //@synthesize deserializationCache=_deserializationCache - In the implementation block
+(id)separatorCharacterSet;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)serializeObject:(id)arg1 ;
-(id)statistics;
-(id)keyboardPrefixForWidth:(float)arg1 andEdge:(BOOL)arg2 ;
-(NSData *)serializedData;
-(NSMutableData *)graphData;
-(id)sanitizedDictionary:(id)arg1 ;
-(NSMutableDictionary *)keyboardOffsets;
-(id)mutableDataForObjectType:(unsigned char)arg1 ;
-(id)mutableDataForObjectType:(unsigned char)arg1 withFlags:(unsigned long long)arg2 ;
-(id)mutableDataForObjectType:(unsigned char)arg1 withSize:(unsigned long long)arg2 ;
-(id)dataForCompressedInt:(long long)arg1 ;
-(id)dataForCompressedUInt:(unsigned long long)arg1 ;
-(id)dataForCompressedFloat:(float)arg1 kind:(unsigned char*)arg2 ;
-(id)dataForFlags:(unsigned char)arg1 ;
-(id)dataForInt:(int)arg1 ;
-(id)dataForBareFloat:(float)arg1 ;
-(id)dataForFloat:(float)arg1 ;
-(id)dataForReference:(int)arg1 ;
-(id)stringsBySplittingString:(id)arg1 afterCharactersInSet:(id)arg2 ;
-(BOOL)stringIsSimple:(id)arg1 ;
-(id)dataForStringConcat:(id)arg1 ;
-(id)dataForSimpleString:(id)arg1 ;
-(id)dataForString:(id)arg1 ;
-(id)dataForArray:(id)arg1 ;
-(id)dataForSet:(id)arg1 ;
-(id)dataForDictionary:(id)arg1 ;
-(id)dataForUIKBValue:(SCD_Struct_TU5)arg1 ;
-(id)dataForGeometry:(id)arg1 ;
-(id)dataForCGRect:(CGRect)arg1 ;
-(id)dataForShape:(id)arg1 ;
-(id)dataForMergeAction:(id)arg1 ;
-(id)dataForUIKBTree:(id)arg1 ;
-(id)dataForOffsetObject:(id)arg1 ;
-(id)dataForObject:(id)arg1 ;
-(void)persistData:(id)arg1 forObject:(id)arg2 ;
-(int)_serializedOffsetForObject:(id)arg1 ;
-(id)_objectAtSerializedOffset:(int)arg1 ;
-(void)preheatWithStatistics:(id)arg1 ;
-(unsigned long long)serializedObjectCount;
-(void)setSerializedData:(NSData *)arg1 ;
-(id)keyboardForName:(id)arg1 ;
-(unsigned long long)compressedIntForOffset:(int*)arg1 ;
-(unsigned long long)compressedUIntForOffset:(int*)arg1 ;
-(unsigned char)flagsForOffset:(int*)arg1 ;
-(int)intValueForOffset:(int*)arg1 ;
-(float)bareFloatForOffset:(int*)arg1 ;
-(float)compressedFloatForOffset:(int*)arg1 withKind:(unsigned char)arg2 ;
-(float)floatValueForOffset:(int*)arg1 ;
-(id)simpleStringForOffset:(int*)arg1 withUTF8Length:(unsigned long long)arg2 ;
-(id)stringConcatForOffset:(int*)arg1 withComponentCount:(unsigned long long)arg2 ;
-(id)arrayForOffset:(int*)arg1 withCount:(unsigned long long)arg2 ;
-(id)refArrayForOffset:(int*)arg1 withCount:(unsigned long long)arg2 ;
-(id)relativeRefArrayForOffset:(int*)arg1 withCount:(unsigned long long)arg2 ;
-(id)setForOffset:(int*)arg1 nonEmpty:(BOOL)arg2 ;
-(id)dictionaryForOffset:(int*)arg1 nonEmpty:(BOOL)arg2 ;
-(SCD_Struct_TU5)UIKBValueForOffset:(int*)arg1 ;
-(id)geometryForOffset:(int*)arg1 withFlags:(unsigned long long)arg2 ;
-(CGRect)CGRectForOffset:(int*)arg1 ;
-(id)shapeForOffset:(int*)arg1 withFlags:(unsigned long long)arg2 ;
-(id)mergeActionForOffset:(int*)arg1 withFlags:(unsigned long long)arg2 ;
-(id)UIKBTreeForOffset:(int*)arg1 withFlags:(unsigned long long)arg2 ;
-(id)objectForOffset:(int*)arg1 ;
-(void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(BOOL)arg3 ;
-(NSMutableDictionary *)deserializationCache;
-(void)setDeserializationCache:(NSMutableDictionary *)arg1 ;
@end

