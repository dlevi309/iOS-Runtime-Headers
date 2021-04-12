/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SACSSymbolOwnerWrapper, NSString, NSUUID, NSMutableDictionary, NSMutableArray;

@interface SABinary : NSObject <SAJSONSerialization, SASerializable> {

	SACSSymbolOwnerWrapper* _symbolOwnerWrapper;
	unsigned long long _alreadyAttempted;
	BOOL _attemptedToGetBundleInfo;
	NSString* _name;
	unsigned long long _numInstructionsWhenLastSymbolicated;
	unsigned long long _optionsWhenLastSymbolicated;
	BOOL _hadSymbolOwnerWhenLastSymbolicated;
	BOOL _symbolOwnerWasDsymWhenLastSymbolicated;
	unsigned long long _numInstructionsWhenLastBulkSymbolicated;
	unsigned long long _textSegmentLength;
	BOOL _hasTextExecSegment;
	NSUUID* _uuid;
	NSString* _path;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _binaryVersion;
	NSMutableDictionary* _instructions;
	NSMutableArray* _symbols;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSMutableDictionary * instructions;              //@synthesize instructions=_instructions - In the implementation block
@property (assign) unsigned long long textSegmentLength; 
@property (assign) BOOL hasTextExecSegment;                           //@synthesize hasTextExecSegment=_hasTextExecSegment - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (retain) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * bundleShortVersion;                     //@synthesize bundleShortVersion=_bundleShortVersion - In the implementation block
@property (retain) NSString * binaryVersion;                          //@synthesize binaryVersion=_binaryVersion - In the implementation block
@property (readonly) NSMutableArray * symbols;                        //@synthesize symbols=_symbols - In the implementation block
@property (readonly) NSUUID * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
+(void)clearCaches;
+(void)enableImmediateCleanupOfCSSymbolOwners;
+(id)binaryWithUUID:(id)arg1 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA8*)arg1 bufferLength:(unsigned long long)arg2 ;
+(void)addSymbolsFromTailspin:(id)arg1 ;
+(id)binaryWithCSSymbolOwner:(CSTypeRef)arg1 isSparse:(BOOL)arg2 ;
+(void)_doCachedBinariesWork:(/*^block*/id)arg1 ;
+(void)_doDsymPathsWork:(/*^block*/id)arg1 ;
+(void)_addDsymPath:(id)arg1 ;
+(id)_dsymPaths;
+(void)clearSymbolCaches;
+(void)clearCoreSymbolicationCaches;
+(id)binaryWithCSSymbolOwner:(CSTypeRef)arg1 ;
+(void)addDsymPaths:(id)arg1 ;
+(void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(NSUUID *)uuid;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)addPath:(id)arg1 ;
-(NSMutableDictionary *)instructions;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleShortVersion;
-(void)setBundleShortVersion:(NSString *)arg1 ;
-(NSMutableArray *)symbols;
-(void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(BOOL)hasTextExecSegment;
-(NSString *)binaryVersion;
-(unsigned long long)textSegmentLength;
-(id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA8*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA8*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setHasTextExecSegment:(BOOL)arg1 ;
-(void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)clearCoreSymbolicationCache;
-(void)clearSymbolCache;
-(BOOL)setSymbolOwner:(CSTypeRef)arg1 isSparse:(BOOL)arg2 ;
-(void)setTextSegmentLength:(unsigned long long)arg1 ;
-(void)addTailspinSymbols:(id)arg1 ;
-(id)addSymbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3 ;
-(void)checkForNewSymbolForInstruction:(id)arg1 ;
-(id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1 ;
-(BOOL)findPathViaBinaryLocator;
-(void)gatherBundleInfo;
-(BOOL)setSymbolOwner:(CSTypeRef)arg1 ;
-(id)symbolOwnerWrapperWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)setBinaryVersion:(NSString *)arg1 ;
@end

