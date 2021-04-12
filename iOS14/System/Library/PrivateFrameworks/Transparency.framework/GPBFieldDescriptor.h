/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


#import <Transparency/Transparency-Structs.h>
@class GPBOneofDescriptor, NSString, GPBEnumDescriptor;

@interface GPBFieldDescriptor : NSObject {

	GPBMessageFieldDescription* description_;
	GPBOneofDescriptor* containingOneof_;
	SEL getSel_;
	SEL setSel_;
	SEL hasOrCountSel_;
	SEL setHasSel_;
	SCD_Union_GP3 defaultValue_;
	Class msgClass_;
	SCD_Union_GP4* enumHandling_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (nonatomic,readonly) BOOL hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) BOOL required; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,readonly) unsigned char fieldType; 
@property (nonatomic,readonly) unsigned char mapKeyDataType; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) GPBOneofDescriptor * containingOneof; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
-(unsigned char)dataType;
-(BOOL)isOptional;
-(unsigned)number;
-(BOOL)isRequired;
-(id)init;
-(/*function pointer*/void*)defaultValue;
-(BOOL)hasDefaultValue;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(NSString *)name;
-(GPBEnumDescriptor *)enumDescriptor;
-(GPBOneofDescriptor *)containingOneof;
-(unsigned char)fieldType;
-(unsigned char)mapKeyDataType;
-(Class)msgClass;
-(BOOL)isPackable;
-(id)textFormatName;
-(void)dealloc;
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(BOOL)arg2 usesClassRefs:(BOOL)arg3 proto3OptionalKnown:(BOOL)arg4 syntax:(unsigned char)arg5 ;
@end

