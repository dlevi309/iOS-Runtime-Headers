/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFSlotIdentifier : NSObject <NSCopying> {

	NSString* _key;
	NSString* _parameterKey;
	long long _arrayIndex;

}

@property (nonatomic,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * parameterKey;              //@synthesize parameterKey=_parameterKey - In the implementation block
@property (nonatomic,readonly) long long arrayIndex;                 //@synthesize arrayIndex=_arrayIndex - In the implementation block
-(long long)arrayIndex;
-(id)initWithKey:(id)arg1 ;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)parameterKey;
-(id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2 ;
-(id)identifierBySettingParameterKey:(id)arg1 ;
-(id)identifierBySettingArrayIndex:(long long)arg1 ;
-(id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3 ;
@end

