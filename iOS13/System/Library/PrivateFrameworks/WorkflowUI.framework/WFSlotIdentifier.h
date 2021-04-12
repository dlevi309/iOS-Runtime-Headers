/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)initWithKey:(id)arg1 ;
-(long long)arrayIndex;
-(NSString *)parameterKey;
-(id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3 ;
-(id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2 ;
-(id)identifierBySettingParameterKey:(id)arg1 ;
-(id)identifierBySettingArrayIndex:(long long)arg1 ;
@end

