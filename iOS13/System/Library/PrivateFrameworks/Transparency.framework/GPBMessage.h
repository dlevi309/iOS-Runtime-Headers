/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBUnknownFieldSet, NSMutableDictionary, GPBFieldDescriptor, GPBExtensionDescriptor;

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying> {

	GPBUnknownFieldSet* unknownFields_;
	NSMutableDictionary* extensionMap_;
	NSMutableDictionary* autocreatedExtensionMap_;
	GPBMessage* autocreator_;
	GPBFieldDescriptor* autocreatorField_;
	GPBExtensionDescriptor* autocreatorExtension_;
	A@ readOnlySemaphore_;
	GPBMessage_Storage* messageStorage_;

}

@property (nonatomic,copy) GPBUnknownFieldSet * unknownFields; 
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)accessInstanceVariablesDirectly;
+(id)message;
+(id)descriptor;
+(id)parseFromData:(id)arg1 error:(id*)arg2 ;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)descriptor;
-(BOOL)isInitialized;
-(GPBUnknownFieldSet *)unknownFields;
-(unsigned long long)serializedSize;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)addExtension:(id)arg1 value:(id)arg2 ;
-(id)getExistingExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 value:(id)arg2 ;
-(void)setUnknownFields:(GPBUnknownFieldSet *)arg1 ;
-(id)extensionsCurrentlySet;
-(id)getExtension:(id)arg1 ;
-(id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)internalClear:(BOOL)arg1 ;
-(void)copyFieldsInto:(id)arg1 zone:(NSZone*)arg2 descriptor:(id)arg3 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg1 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 range:(GPBExtensionRange)arg2 ;
-(void)writeField:(id)arg1 toCodedOutputStream:(id)arg2 ;
-(void)clearExtension:(id)arg1 ;
-(id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2 ;
-(BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned)arg3 ;
-(id)delimitedData;
-(void)writeToOutputStream:(id)arg1 ;
-(void)writeDelimitedToOutputStream:(id)arg1 ;
-(BOOL)hasExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3 ;
@end

