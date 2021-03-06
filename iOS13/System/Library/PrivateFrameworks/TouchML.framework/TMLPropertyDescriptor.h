/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSString;

@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize> {

	NSString* _propertyName;
	NSString* _propertyType;
	BOOL _readonly;
	BOOL _optional;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * propertyName;                      //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * typeClassName; 
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly;              //@synthesize readonly=_readonly - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;              //@synthesize optional=_optional - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(BOOL)isReadonly;
-(BOOL)isOptional;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)propertyName;
-(id)initWithName:(id)arg1 typeName:(id)arg2 attributes:(id)arg3 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 attributes:(id)arg3 ;
-(NSString *)typeClassName;
-(BOOL)canMergeFromPropertyDescriptor:(id)arg1 ;
@end

