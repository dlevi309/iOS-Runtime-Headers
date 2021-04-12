/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TRIPBEnumDescriptor;

@interface TRIPBExtensionDescriptor : NSObject <NSCopying> {

	TRIPBExtensionDescription* description_;
	SCD_Union_TR6 defaultValue_;
	Class containingMessageClass_;

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
@property (nonatomic,readonly) TRIPBEnumDescriptor * enumDescriptor; 
@property (nonatomic,readonly) id defaultValue; 
-(unsigned char)dataType;
-(id)defaultValue;
-(TRIPBEnumDescriptor *)enumDescriptor;
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
-(id)initWithExtensionDescription:(TRIPBExtensionDescription*)arg1 ;
-(const char*)singletonNameC;
@end

