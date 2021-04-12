/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASerializable.h>

@class PASymbol, PASymbolOwner, NSString, NSUUID;

@interface PASymbolHandle : NSObject <PASerializable> {

	PASymbol* _symbol;
	PASymbolOwner* _owner;
	unsigned long long _symbolOwnerStartAddressInTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasSymbolOwner; 
@property (readonly) NSUUID * symbolOwnerUUID; 
@property (readonly) BOOL hasSymbolOwnerStartAddressInTask; 
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;              //@synthesize symbolOwnerStartAddressInTask=_symbolOwnerStartAddressInTask - In the implementation block
@property (readonly) NSString * symbolOwnerName; 
@property (retain) NSString * symbolOwnerPath; 
@property (readonly) unsigned long long symbolOwnerTextSegmentLength; 
@property (readonly) BOOL symbolOwnerIsTextExecSegment; 
@property (readonly) NSString * symbolOwnerBundleIdentifier; 
@property (readonly) NSString * symbolOwnerBundleVersion; 
@property (readonly) NSString * symbolOwnerBundleShortVersion; 
@property (readonly) NSString * symbolOwnerBinaryVersion; 
@property (readonly) BOOL hasSymbol; 
@property (readonly) NSString * symbolName; 
@property (readonly) unsigned long long symbolStartAddressInTask; 
@property (readonly) unsigned long long symbolLength; 
+(id)classDictionaryKey;
+(id)getEmptySymbolHandle;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)symbolName;
-(NSUUID *)symbolOwnerUUID;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(id)_initAsEmptyHandle;
-(unsigned long long)symbolStartAddressInTask;
-(unsigned long long)symbolLength;
-(id)_sourceInformationForAddress:(unsigned long long)arg1 ;
-(BOOL)hasSourceInformationForAddress:(unsigned long long)arg1 ;
-(id)debugDescriptionForAddress:(unsigned long long)arg1 ;
-(unsigned long long)symbolOwnerStartAddressInTask;
-(NSString *)symbolOwnerName;
-(id)sourceFileNameForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceColumnNumberForAddress:(unsigned long long)arg1 ;
-(BOOL)hasSymbolOwner;
-(BOOL)hasSymbolOwnerStartAddressInTask;
-(NSString *)symbolOwnerPath;
-(void)setSymbolOwnerPath:(NSString *)arg1 ;
-(unsigned long long)symbolOwnerTextSegmentLength;
-(BOOL)symbolOwnerIsTextExecSegment;
-(NSString *)symbolOwnerBundleIdentifier;
-(NSString *)symbolOwnerBundleVersion;
-(NSString *)symbolOwnerBundleShortVersion;
-(NSString *)symbolOwnerBinaryVersion;
-(BOOL)hasSymbol;
-(unsigned long long)sourceStartAddressInTaskForAddress:(unsigned long long)arg1 ;
-(unsigned long long)sourceLengthForAddress:(unsigned long long)arg1 ;
-(long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3 ;
-(BOOL)addToPersistentCache;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end

