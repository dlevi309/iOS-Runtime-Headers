/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Union_GP2 defaultValue_;
	Class msgClass_;
	SCD_Union_GP3* enumHandling_;

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
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(unsigned char)dataType;
-(unsigned)number;
-(/*function pointer*/void*)defaultValue;
-(BOOL)isOptional;
-(BOOL)isRequired;
-(unsigned char)fieldType;
-(unsigned char)mapKeyDataType;
-(Class)msgClass;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(BOOL)arg2 syntax:(unsigned char)arg3 ;
-(BOOL)hasDefaultValue;
-(BOOL)isPackable;
-(GPBEnumDescriptor *)enumDescriptor;
-(id)textFormatName;
-(GPBOneofDescriptor *)containingOneof;
@end

