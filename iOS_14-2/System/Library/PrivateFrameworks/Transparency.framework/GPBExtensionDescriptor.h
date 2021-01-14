/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GPBEnumDescriptor;

@interface GPBExtensionDescriptor : NSObject <NSCopying> {

	GPBExtensionDescription* description_;
	SCD_Union_GP3 defaultValue_;

}

@property (nonatomic,readonly) int wireType; 
@property (nonatomic,readonly) int alternateWireType; 
@property (nonatomic,readonly) unsigned fieldNumber; 
@property (nonatomic,readonly) Class containingMessageClass; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) NSString * singletonName; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
@property (nonatomic,readonly) id defaultValue; 
-(unsigned char)dataType;
-(id)defaultValue;
-(GPBEnumDescriptor *)enumDescriptor;
-(int)wireType;
-(Class)msgClass;
-(BOOL)isPackable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isRepeated;
-(long long)compareByFieldNumber:(id)arg1 ;
-(unsigned)fieldNumber;
-(NSString *)singletonName;
-(int)alternateWireType;
-(Class)containingMessageClass;
-(id)initWithExtensionDescription:(GPBExtensionDescription*)arg1 ;
-(const char*)singletonNameC;
-(id)initWithExtensionDescription:(GPBExtensionDescription*)arg1 usesClassRefs:(BOOL)arg2 ;
@end

