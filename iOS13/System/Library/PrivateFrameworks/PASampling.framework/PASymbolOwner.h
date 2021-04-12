/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString, NSUUID, NSMutableArray, NSArray, PASymbol;

@interface PASymbolOwner : NSObject <PASerializable> {

	NSString* _name;
	NSString* _path;
	NSUUID* _uuid;
	unsigned long long _textSegmentLength;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _binaryVersion;
	NSMutableArray* _symbols;
	NSArray* _oldSymbols;
	PASymbol* _testSymbol;
	BOOL _isTextExecSegment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) BOOL isTextExecSegment;                          //@synthesize isTextExecSegment=_isTextExecSegment - In the implementation block
@property (retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (retain) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long textSegmentLength;              //@synthesize textSegmentLength=_textSegmentLength - In the implementation block
@property (readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * bundleVersion;                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (readonly) NSString * bundleShortVersion;                   //@synthesize bundleShortVersion=_bundleShortVersion - In the implementation block
@property (readonly) NSString * binaryVersion;                        //@synthesize binaryVersion=_binaryVersion - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(NSUUID *)uuid;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)bundleShortVersion;
-(NSString *)binaryVersion;
-(unsigned long long)textSegmentLength;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(void)setTextSegmentLength:(unsigned long long)arg1 ;
-(void)addTailspinSymbols:(id)arg1 ;
-(void)gatherBundleInfo;
-(unsigned long long)_insertionIndexInSymbols:(id)arg1 forSymbolWithOffsetIntoSymbolOwner:(unsigned long long)arg2 ;
-(id)_symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 inSymbols:(id)arg2 ;
-(void)incorporateDataFromCSSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(id)initWithCSSymbolOwnerRef:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(id)addSymbol:(id)arg1 ;
-(id)symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(id)oldSymbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 ;
-(void)incorporateDataFromPACSSymbolOwner:(id)arg1 ;
-(id)initWithUUID:(id)arg1 andPath:(id)arg2 andSize:(unsigned long long)arg3 isTextExecSegment:(BOOL)arg4 ;
-(id)initWithCSSymbolOwnerRef:(CSTypeRef)arg1 ;
-(id)initWithPACSSymbolOwner:(id)arg1 ;
-(long long)compareInfoRichnessToSymbolOwner:(id)arg1 ;
-(BOOL)isTextExecSegment;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(BOOL)containsSymbol:(id)arg1 ;
-(id)_initWithSerializedSymbolOwner:(const SCD_Struct_PA3*)arg1 ;
@end

