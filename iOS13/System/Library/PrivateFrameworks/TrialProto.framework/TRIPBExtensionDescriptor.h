/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TRIPBEnumDescriptor;

@interface TRIPBExtensionDescriptor : NSObject <NSCopying> {

	TRIPBExtensionDescription* description_;
	SCD_Union_TR5 defaultValue_;
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)dataType;
-(id)defaultValue;
-(int)wireType;
-(Class)msgClass;
-(const char*)singletonNameC;
-(BOOL)isPackable;
-(TRIPBEnumDescriptor *)enumDescriptor;
-(id)initWithExtensionDescription:(TRIPBExtensionDescription*)arg1 ;
-(NSString *)singletonName;
-(unsigned)fieldNumber;
-(int)alternateWireType;
-(BOOL)isRepeated;
-(long long)compareByFieldNumber:(id)arg1 ;
-(Class)containingMessageClass;
@end

