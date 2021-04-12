/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
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
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)message;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)descriptor;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)parseFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
+(id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)clear;
-(BOOL)isInitialized;
-(GPBUnknownFieldSet *)unknownFields;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)descriptor;
-(id)description;
-(id)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addExtension:(id)arg1 value:(id)arg2 ;
-(id)getExistingExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 value:(id)arg2 ;
-(void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)setUnknownFields:(GPBUnknownFieldSet *)arg1 ;
-(id)extensionsCurrentlySet;
-(id)getExtension:(id)arg1 ;
-(id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)internalClear:(BOOL)arg1 ;
-(void)copyFieldsInto:(id)arg1 zone:(NSZone*)arg2 descriptor:(id)arg3 ;
-(unsigned long long)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg1 ;
-(void)writeField:(id)arg1 toCodedOutputStream:(id)arg2 ;
-(void)clearExtension:(id)arg1 ;
-(id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id*)arg3 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)addUnknownMapEntry:(int)arg1 value:(id)arg2 ;
-(BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned)arg3 ;
-(id)delimitedData;
-(void)writeToOutputStream:(id)arg1 ;
-(void)writeDelimitedToOutputStream:(id)arg1 ;
-(BOOL)hasExtension:(id)arg1 ;
-(void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg1 range:(GPBExtensionRange)arg2 sortedExtensions:(id)arg3 ;
@end

