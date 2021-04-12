/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SACSSymbolOwnerWrapper, NSString, SASegment, NSMutableArray, NSUUID, NSArray;

@interface SABinary : NSObject <SAJSONSerialization, SASerializable> {

	SACSSymbolOwnerWrapper* _symbolOwnerWrapper;
	unsigned long long _alreadyAttempted;
	BOOL _attemptedToGetBundleInfo;
	NSString* _name;
	unsigned long long _optionsWhenLastSymbolicated;
	BOOL _hadSymbolOwnerWhenLastSymbolicated;
	BOOL _symbolOwnerWasDsymWhenLastSymbolicated;
	unsigned long long _length;
	SASegment* _fakeEntireBinarySegment;
	NSMutableArray* _segments;
	BOOL _haveMoreInstructionsToSymbolicate;
	NSUUID* _uuid;
	NSString* _path;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _binaryVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) NSString * path; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * bundleShortVersion; 
@property (readonly) NSString * binaryVersion; 
@property (readonly) NSArray * segments; 
@property (readonly) unsigned long long textSegmentLength; 
@property (readonly) BOOL hasTextExecSegment; 
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)binaryWithUUID:(id)arg1 ;
+(void)addSymbolsFromTailspin:(id)arg1 ;
+(void)clearSymbolCaches;
+(void)clearCoreSymbolicationCaches;
+(void)enableImmediateCleanupOfCSSymbolOwners;
+(void)addDsymPaths:(id)arg1 ;
+(void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2 ;
-(NSUUID *)uuid;
-(NSString *)bundleIdentifier;
-(NSString *)debugDescription;
-(void)addPath:(id)arg1 ;
-(unsigned long long)length;
-(NSString *)path;
-(NSString *)binaryVersion;
-(NSString *)bundleVersion;
-(NSString *)name;
-(NSArray *)segments;
-(NSString *)bundleShortVersion;
-(id)initWithUUID:(id)arg1 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA7*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)clearCoreSymbolicationCache;
-(void)clearSymbolCache;
-(id)instructionAtOffsetIntoBinary:(long long)arg1 ;
-(id)segmentWithName:(id)arg1 ;
-(BOOL)cacheSymbolOwnerWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(unsigned long long)textSegmentLength;
-(BOOL)hasTextExecSegment;
-(id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1 ;
@end

